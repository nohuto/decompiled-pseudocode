/*
 * XREFs of IopFreeReqList @ 0x140752F80
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1401899A8 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140752D64 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x140752E50 (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x140753710 (IopResourceRequirementsListToReqList.c)
 *     IopQueryConflictListInternal @ 0x14087D198 (IopQueryConflictListInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopFreeReqAlternative @ 0x140752FD8 (IopFreeReqAlternative.c)
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
