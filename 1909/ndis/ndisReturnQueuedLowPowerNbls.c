/*
 * XREFs of ndisReturnQueuedLowPowerNbls @ 0x1C0014538
 * Callers:
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118B70 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisReturnQueuedLowPowerNbls(__int64 a1, char a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // bp
  struct _NET_BUFFER_LIST *v6; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 3872);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 3872));
  if ( a2 )
    *(_BYTE *)(a1 + 3900) = 1;
  v6 = *(struct _NET_BUFFER_LIST **)(a1 + 3888);
  if ( v6 )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
    {
      ndisNblTrackerTransferOwnershipInternal(v6, 0LL, *(_QWORD *)(a1 + 4080), 0x8Du, 1u);
      v6 = *(struct _NET_BUFFER_LIST **)(a1 + 3888);
    }
    (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, __int64))(*(_QWORD *)(a1 + 3760) + 192LL))(
      *(_QWORD *)(a1 + 24),
      v6,
      1LL);
    *(_QWORD *)(a1 + 3888) = 0LL;
  }
  KeReleaseSpinLock(v2, v5);
}
