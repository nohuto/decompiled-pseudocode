/*
 * XREFs of VfIrpWatermark @ 0x14096EF3C
 * Callers:
 *     IovUtilWatermarkIrp @ 0x1400ED744 (IovUtilWatermarkIrp.c)
 *     PopAllocateIrp @ 0x140173844 (PopAllocateIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x14097DAB8 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14097DC38 (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIrpWatermark(__int64 a1, char a2)
{
  __int64 result; // rax

  result = VfIrpDatabaseEntryFindAndLock(a1);
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *(_DWORD *)(result + 56) |= 0x100000u;
    if ( (a2 & 2) != 0 )
      *(_DWORD *)(result + 56) |= 0x20u;
    return VfIrpDatabaseEntryReleaseLock(result);
  }
  return result;
}
