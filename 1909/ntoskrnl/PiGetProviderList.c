/*
 * XREFs of PiGetProviderList @ 0x140704B0C
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1407008C0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipNotifyDeviceDependencyList @ 0x140700A38 (PipNotifyDeviceDependencyList.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140704AC4 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x140730FFC (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x140739600 (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x14085DE40 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x140874EFC (IopCheckIfMergeRequired.c)
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
