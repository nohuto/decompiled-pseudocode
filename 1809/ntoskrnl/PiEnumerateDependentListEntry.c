/*
 * XREFs of PiEnumerateDependentListEntry @ 0x140823B38
 * Callers:
 *     PipAttemptDependentsStart @ 0x1406EB610 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x1406EC5D4 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x1406EC8B0 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1406ECD68 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140739E08 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1402877B0 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateDependentListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 1);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 40) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
