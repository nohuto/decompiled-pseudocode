/*
 * XREFs of PiGetDependentList @ 0x1406FED34
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1406FEC58 (PipNotifyDeviceDependencyList.c)
 *     PipAttemptDependentsStart @ 0x1406FED00 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x14072EF54 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14072F35C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140731698 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140770138 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14085DD10 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14085E740 (PnpGetDeviceDependencyList.c)
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
