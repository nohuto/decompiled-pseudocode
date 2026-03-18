/*
 * XREFs of ExpCheckForLookaside @ 0x14031CB04
 * Callers:
 *     ExpFreePoolChecks @ 0x14009D77C (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x14031CB6C (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x14093EF78 (VfCheckForLookaside.c)
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
