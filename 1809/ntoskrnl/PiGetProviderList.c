/*
 * XREFs of PiGetProviderList @ 0x1406E6C40
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x1406E6BF8 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x1406EB7C0 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406EB830 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x1406EF11C (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14070BD3C (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x140824310 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x14083AA88 (IopCheckIfMergeRequired.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetProviderList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  else
    v1 = 0LL;
  if ( v1 )
    return (__int64 *)(v1 + 16);
  else
    return &PiDependencyNodeEmptyList;
}
