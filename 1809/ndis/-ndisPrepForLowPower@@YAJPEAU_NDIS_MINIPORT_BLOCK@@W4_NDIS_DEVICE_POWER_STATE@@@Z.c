/*
 * XREFs of ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010508
 * Callers:
 *     ndisSetDevicePower @ 0x1C00108DC (ndisSetDevicePower.c)
 *     ndisSetSystemPower @ 0x1C00B8930 (ndisSetSystemPower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00F58A0 (ndisWdfNotifySystemPower.c)
 * Callees:
 *     ndisMSwapOpenHandlers @ 0x1C001C6F8 (ndisMSwapOpenHandlers.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B8340 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00B8484 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00B8B70 (ndisNotifyDevicePowerStateChange.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00B8CBC (ndisMInvokeDevicePowerNotify.c)
 *     ndisRequestWaitWake @ 0x1C00BBF44 (ndisRequestWaitWake.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0107614 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisPrepForLowPower(struct _NDIS_MINIPORT_BLOCK *Context, unsigned int a2)
{
  unsigned int v4; // edi
  unsigned int PnPFlags; // eax
  unsigned int FilterPnPFlags; // edx
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // bp
  unsigned int v10; // ecx
  _QWORD v12[20]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = 0;
  ndisMInvokeDevicePowerNotify();
  ndisNotifyDevicePowerStateChange(Context, a2);
  PnPFlags = Context->PnPFlags;
  if ( (PnPFlags & 0x20) != 0 )
  {
    ndisIssueNetEventSetPowerEvent(Context);
    PnPFlags = Context->PnPFlags;
  }
  FilterPnPFlags = Context->FilterPnPFlags;
  if ( (FilterPnPFlags & 0x80u) == 0 || (PnPFlags & 0x20) == 0 )
  {
    Context->FilterPnPFlags = FilterPnPFlags | 0x100;
    Ndis::BindEngine::BeginPolicyUpdates(&Context->BindEngine);
    if ( Ndis::BindState::SetPause(&Context->Bindings.Miniport, DatapathPaused, PauseReason_LowPower)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      ndisGetBindLinkNameForTracing(Context, (struct NDIS_PNPTRACE_LOCALS *)v12);
      WPP_SF_Zq(88LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v12[1], v12[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&Context->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&Context->BindEngine, RunSynchronous, 0);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&Context->MiniportOwner, 1LL);
  if ( (Context->PnPFlags & 0x20) != 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&Context->Lock);
    LOBYTE(v8) = 4;
    Context->MiniportThread = KeGetCurrentThread();
    v9 = v7;
    Context->LockDbg = 1707005;
    ndisMSwapOpenHandlers(Context, v8);
    if ( Context->WaitWakeIrp )
      Context->PnPFlags &= ~0x400u;
    Context->MiniportThread = 0LL;
    Context->LockDbg = 0;
    KeReleaseSpinLock(&Context->Lock, v9);
    v10 = Context->PnPFlags;
    if ( (v10 & 0x400) != 0 && (Context->Flags & 0x80u) == 0 )
    {
      Context->PnPFlags = v10 & 0xFFFFFBFF;
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(89LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context);
      v4 = ndisRequestWaitWake(Context, ndisGenericWaitWakeCallback);
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_qq(90LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context, Context->WaitWakeIrp);
    }
  }
  return v4;
}
