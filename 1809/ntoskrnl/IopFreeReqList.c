/*
 * XREFs of IopFreeReqList @ 0x14072E6F0
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140180A78 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14072E4D8 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x14072E5C0 (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x14072EE74 (IopResourceRequirementsListToReqList.c)
 *     IopQueryConflictListInternal @ 0x140842054 (IopQueryConflictListInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IopFreeReqAlternative @ 0x14072E748 (IopFreeReqAlternative.c)
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
