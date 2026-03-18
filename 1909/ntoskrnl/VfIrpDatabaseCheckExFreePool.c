/*
 * XREFs of VfIrpDatabaseCheckExFreePool @ 0x14097DA20
 * Callers:
 *     VerifierExFreePoolWithTag @ 0x140972840 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockShared @ 0x140328D48 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140328DCC (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x14096448C (VfUtilAddressRangeFitNoLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     ViIrpDatabaseFindPointer @ 0x14097DE28 (ViIrpDatabaseFindPointer.c)
 */

void __fastcall VfIrpDatabaseCheckExFreePool(ULONG_PTR BugCheckParameter2)
{
  __int64 Pointer; // rbx
  KIRQL v3; // [rsp+48h] [rbp+10h] BYREF

  if ( VfIrpDatabaseInitialized )
  {
    if ( VfUtilAddressRangeFitNoLock(
           (__m128i *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (BugCheckParameter2 >> 12))),
           BugCheckParameter2,
           BugCheckParameter2 + 1) )
    {
      ViIrpDatabaseAcquireLockShared(&v3);
      Pointer = ViIrpDatabaseFindPointer(BugCheckParameter2);
      ViIrpDatabaseReleaseLockShared(v3);
      if ( Pointer )
      {
        if ( (MmVerifierData & 0x10) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0x105uLL, BugCheckParameter2, 0LL, 0LL);
      }
    }
  }
}
