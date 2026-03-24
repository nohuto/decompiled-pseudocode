/*
 * XREFs of PiEnumerateProviderListEntry @ 0x140823B4C
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x1406E6BD8 (PipCheckForUnsatisfiedDependencies.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406EB810 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x1406EF0FC (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14070BD1C (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x14083AA68 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1402878B0 (PiListEntryToDependencyEdge.c)
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
