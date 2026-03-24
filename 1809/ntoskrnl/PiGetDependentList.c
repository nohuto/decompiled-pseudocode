/*
 * XREFs of PiGetDependentList @ 0x1406EB624
 * Callers:
 *     PipAttemptDependentsStart @ 0x1406EB5F0 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x1406EB7A0 (PipNotifyDeviceDependencyList.c)
 *     PipVisitDeviceObjectListEntry @ 0x1406EC5B4 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x1406EC890 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1406ECD48 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140739DE8 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x1408238C0 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1408242F0 (PnpGetDeviceDependencyList.c)
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
