/*
 * XREFs of ndisIMInitializeDeviceInstance @ 0x1C00EB6F8
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C00BC0B8 (ndisStartDeviceSynchronous.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00EB0F0 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ndisPnPStartDevice @ 0x1C00BC164 (ndisPnPStartDevice.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C3658 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 *     ndisReinitializeMiniportBlock @ 0x1C01196D4 (ndisReinitializeMiniportBlock.c)
 */

__int64 __fastcall ndisIMInitializeDeviceInstance(char *DeferredContext, __int64 a2)
{
  __int64 v4; // r8
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  unsigned int v6; // ebx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x24u, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, DeferredContext, a2);
  ndisReinitializeMiniportBlock(DeferredContext);
  if ( (unsigned __int8)DeferredContext[32] < 6u )
  {
    *((_DWORD *)DeferredContext + 975) = 0;
    *((_DWORD *)DeferredContext + 978) = 0;
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(DeferredContext + 5264));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(DeferredContext + 5168, 0LL);
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeferredContext + 5072), DatapathRunning, PauseReason_LowPower)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      WPP_SF_Zq(
        0x25u,
        &WPP_b87f241b44683114d5775ca3de93698d_Traceguids,
        *((const wchar_t **)DeferredContext + 486),
        DeferredContext);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeferredContext + 5144), v5);
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(DeferredContext + 5144), RunSynchronous, 0);
  }
  *((_QWORD *)DeferredContext + 248) = a2;
  v6 = ndisPnPStartDevice(DeferredContext, 0LL, v4);
  if ( v6 )
    v6 = -1073741823;
  else
    ndisMSetMiniportReadyForBinding(
      (__int64)DeferredContext,
      1,
      Reason_RemovingMiniport|Reason_DriverNotReady,
      RunSynchronous);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0x26u, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, DeferredContext, a2, v6);
  return v6;
}
