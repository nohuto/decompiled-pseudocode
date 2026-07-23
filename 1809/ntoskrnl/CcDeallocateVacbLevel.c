/*
 * XREFs of CcDeallocateVacbLevel @ 0x14012D13C
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1400224B0 (CcSetVacbLargeOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall CcDeallocateVacbLevel(PVOID Entry, int a2)
{
  struct _NPAGED_LOOKASIDE_LIST *v3; // rcx

  v3 = &CcVacbLevelWithBcbListHeadsLookasideList;
  if ( !a2 )
    v3 = &CcVacbLevelLookasideList;
  ExFreeToNPagedLookasideList(v3, Entry);
}
