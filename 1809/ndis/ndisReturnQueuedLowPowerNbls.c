/*
 * XREFs of ndisReturnQueuedLowPowerNbls @ 0x1C0010B88
 * Callers:
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00F4E5C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

void __fastcall ndisReturnQueuedLowPowerNbls(__int64 a1, char a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // bp
  struct _NET_BUFFER_LIST *v6; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 3904);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 3904));
  if ( a2 )
    *(_BYTE *)(a1 + 3932) = 1;
  v6 = *(struct _NET_BUFFER_LIST **)(a1 + 3920);
  if ( v6 )
  {
    if ( ndisNblTrackerMode )
    {
      ndisNblTrackerTransferOwnershipInternal(
        v6,
        0LL,
        *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 4112),
        NdisNblTrackerEvent_ReturnedToMiniport,
        1u);
      v6 = *(struct _NET_BUFFER_LIST **)(a1 + 3920);
    }
    (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, __int64))(*(_QWORD *)(a1 + 3792) + 192LL))(
      *(_QWORD *)(a1 + 24),
      v6,
      1LL);
    *(_QWORD *)(a1 + 3920) = 0LL;
  }
  KeReleaseSpinLock(v2, v5);
}
