/*
 * XREFs of IopFreeReqList @ 0x14072E710
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140180A58 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14072E4F8 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x14072E5E0 (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x14072EE94 (IopResourceRequirementsListToReqList.c)
 *     IopQueryConflictListInternal @ 0x140842074 (IopQueryConflictListInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IopFreeReqAlternative @ 0x14072E768 (IopFreeReqAlternative.c)
 */

void __fastcall IopFreeReqList(_QWORD *P)
{
  __int64 i; // rsi

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 8); i = (unsigned int)(i + 1) )
    {
      IopFreeReqAlternative(P[i + 5]);
      P[i + 5] = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
