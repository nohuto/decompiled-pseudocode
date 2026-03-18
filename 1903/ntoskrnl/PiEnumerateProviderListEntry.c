/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14085DF9C
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406FEAE0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140702CE4 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x14072ED9C (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x1407373A0 (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x1408757FC (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14029D9AC (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateProviderListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 0);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
