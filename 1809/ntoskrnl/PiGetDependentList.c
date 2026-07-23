/*
 * XREFs of PiGetDependentList @ 0x1406EC8C4
 * Callers:
 *     PipAttemptDependentsStart @ 0x1406EC890 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x1406ECA40 (PipNotifyDeviceDependencyList.c)
 *     PipVisitDeviceObjectListEntry @ 0x1406ED854 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x1406EDB30 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1406EDFE8 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14073AFD8 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x140824AC0 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1408254F0 (PnpGetDeviceDependencyList.c)
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
