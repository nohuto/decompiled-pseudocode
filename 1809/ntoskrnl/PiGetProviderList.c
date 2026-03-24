/*
 * XREFs of PiGetProviderList @ 0x1406E6C20
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x1406E6BD8 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x1406EB7A0 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406EB810 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x1406EF0FC (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14070BD1C (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x1408242F0 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x14083AA68 (IopCheckIfMergeRequired.c)
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
