/*
 * XREFs of PiGetDependentList @ 0x1406EB644
 * Callers:
 *     PipAttemptDependentsStart @ 0x1406EB610 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x1406EB7C0 (PipNotifyDeviceDependencyList.c)
 *     PipVisitDeviceObjectListEntry @ 0x1406EC5D4 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x1406EC8B0 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1406ECD68 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140739E08 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x1408238E0 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140824310 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetDependentList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  else
    v1 = 0LL;
  if ( v1 )
    return (__int64 *)(v1 + 32);
  else
    return &PiDependencyNodeEmptyList;
}
