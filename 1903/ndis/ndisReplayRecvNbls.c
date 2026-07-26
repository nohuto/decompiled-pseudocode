/*
 * XREFs of ndisReplayRecvNbls @ 0x1C00B8AD4
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00B60FC (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisRequestPowerResume @ 0x1C00B8C10 (ndisRequestPowerResume.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C00B940C (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisReplayRecvNbls(_QWORD *a1, struct _NET_BUFFER_LIST *a2)
{
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, a1[510], 0x8Du, 0);
  return (*(__int64 (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[470] + 192LL))(a1[3], a2, 0LL);
}
