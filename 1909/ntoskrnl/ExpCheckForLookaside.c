/*
 * XREFs of ExpCheckForLookaside @ 0x14033B8D8
 * Callers:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x1400F5C08 (ExpFreePoolChecks.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x14033B940 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x14097E808 (VfCheckForLookaside.c)
 */

__int64 __fastcall ExpCheckForLookaside(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) == 0 || (result = VfCheckForLookaside(a1, a2), !(_DWORD)result) )
  {
    ExpCheckForLookasideList(a1, a2, &ExNPagedLookasideListHead, &ExNPagedLookasideLock);
    return ExpCheckForLookasideList(a1, a2, &ExPagedLookasideListHead, &ExPagedLookasideLock);
  }
  return result;
}
