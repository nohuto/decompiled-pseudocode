/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x14093E224
 * Callers:
 *     IovCancelIrp @ 0x140923F90 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x14092EC8C (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x14092F484 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x14092F4F4 (IovpCompleteRequest1.c)
 *     VfIoFreeIrp @ 0x14093027C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140930428 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x1409306B4 (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x1409306F0 (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x140933880 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14093E2D0 (VfIrpDatabaseEntryInsertAndLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14030B50C (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14030B590 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140925FFC (VfUtilAddressRangeFitNoLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093E3A4 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x14093E594 (ViIrpDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpDatabaseEntryFindAndLock(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 Pointer; // rax
  KIRQL v4; // bl
  KIRQL v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( VfIrpDatabaseInitialized
    && VfUtilAddressRangeFitNoLock(
         (__m128i *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12))),
         a1,
         a1 + 208) )
  {
    ViIrpDatabaseAcquireLockShared(&v6);
    Pointer = ViIrpDatabaseFindPointer(a1);
    v1 = Pointer;
    if ( Pointer )
    {
      _InterlockedIncrement((volatile signed __int32 *)(Pointer + 20));
      v4 = v6;
      ViIrpDatabaseReleaseLockShared(v6);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 8));
      *(_BYTE *)(v1 + 16) = v4;
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 20));
      if ( !*(_DWORD *)(v1 + 24) )
      {
        VfIrpDatabaseEntryReleaseLock(v1);
        return 0LL;
      }
    }
    else
    {
      ViIrpDatabaseReleaseLockShared(v6);
    }
  }
  return v1;
}
