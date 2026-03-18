/*
 * XREFs of PiGetDependentList @ 0x140700B14
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x140700A38 (PipNotifyDeviceDependencyList.c)
 *     PipAttemptDependentsStart @ 0x140700AE0 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407311B4 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x1407315BC (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1407338F8 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14077371C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14085D410 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14085DE40 (PnpGetDeviceDependencyList.c)
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
