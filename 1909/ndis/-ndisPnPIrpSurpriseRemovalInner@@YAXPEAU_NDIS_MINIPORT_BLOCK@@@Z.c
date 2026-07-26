/*
 * XREFs of ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118B70
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00A5134 (ndisPnPIrpSurpriseRemoval.c)
 *     ?ndisQueuedPnPIrpSurpriseRemoval@@YAXPEAX@Z @ 0x1C0118D20 (-ndisQueuedPnPIrpSurpriseRemoval@@YAXPEAX@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C0014538 (ndisReturnQueuedLowPowerNbls.c)
 *     ndisPowerSaveStop @ 0x1C0014940 (ndisPowerSaveStop.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00A527C (ndisPnPRemoveDeviceEx.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00FC564 (ndisIssueNetEventSetPowerEvent.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FD0B0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

void __fastcall ndisPnPIrpSurpriseRemovalInner(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  _DWORD v5[44]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      36,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a1);
  }
  ndisPowerSaveStop(a1, NdisSSDeviceSurpriseRemove);
  KeWaitForSingleObject(&a1->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
  if ( a1->CurrentDevicePowerState != PowerDeviceD0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        13,
        37,
        (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
        (char)a1);
    }
    if ( (a1->InfoFlags & 0x80000000) != 0 )
      ndisReturnQueuedLowPowerNbls((__int64)a1, 1);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a1->MiniportOwner);
    ndisIssueNetEventSetPowerEvent((__int64)a1, 1, 1);
  }
  ndisInitializeNetPnPEvent(v5, 0LL);
  v5[2] = 2;
  ndisDevicePnPEventNotifyFiltersAndAllTransports((__int64)a1, (__int64)v5);
  a1->AdminStatus = NET_IF_ADMIN_STATUS_UP;
  ndisPnPRemoveDeviceEx((__int64)a1);
  ndisDereferenceMiniport((__int64)a1, 0x1Du);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      13,
      38,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a1);
  }
}
