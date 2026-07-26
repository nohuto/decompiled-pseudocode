/*
 * XREFs of ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001295C
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012910 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfNotifyDevicePower @ 0x1C00A6F44 (ndisWdfNotifyDevicePower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00A7128 (ndisWdfNotifySystemPower.c)
 * Callees:
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014248 (ndisNotifyDevicePowerStateChange.c)
 *     ndisMSwapOpenHandlers @ 0x1C001BD5C (ndisMSwapOpenHandlers.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FC530 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00FC564 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00FC6F0 (ndisMInvokeDevicePowerNotify.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279DC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisPrepForLowPowerCommon(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_DEVICE_POWER_STATE a2)
{
  char v2; // di
  unsigned int PnPFlags; // eax
  unsigned int FilterPnPFlags; // edx
  KIRQL v6; // al
  KIRQL v7; // si
  int v8; // edx
  char v9[160]; // [rsp+40h] [rbp-A8h] BYREF

  v2 = a2;
  ndisMInvokeDevicePowerNotify((char)a1);
  ndisNotifyDevicePowerStateChange((char)a1, v2);
  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x20) != 0 )
  {
    ndisIssueNetEventSetPowerEvent((char)a1);
    PnPFlags = a1->PnPFlags;
  }
  FilterPnPFlags = a1->FilterPnPFlags;
  if ( (FilterPnPFlags & 0x80u) == 0 || (PnPFlags & 0x20) == 0 )
  {
    a1->FilterPnPFlags = FilterPnPFlags | 0x100;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_LowPower) )
    {
      memset(v9, 0, sizeof(v9));
      if ( (unsigned __int8)byte_1C00E673B >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v9);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v8,
            28,
            93,
            (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
            *(__int64 *)&v9[8],
            v9[0]);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&a1->MiniportOwner, 1LL);
  if ( (a1->PnPFlags & 0x20) != 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    v7 = v6;
    ndisMSwapOpenHandlers(a1);
    if ( a1->WaitWakeIrp )
      a1->PnPFlags &= ~0x400u;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v7);
  }
}
