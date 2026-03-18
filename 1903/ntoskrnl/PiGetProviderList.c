/*
 * XREFs of PiGetProviderList @ 0x140702D2C
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406FEAE0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipNotifyDeviceDependencyList @ 0x1406FEC58 (PipNotifyDeviceDependencyList.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140702CE4 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x14072ED9C (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x1407373A0 (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x14085E740 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1408757FC (IopCheckIfMergeRequired.c)
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
