/*
 * XREFs of PiEnumerateDependentListEntry @ 0x140824D18
 * Callers:
 *     PipAttemptDependentsStart @ 0x1406EC890 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x1406ED854 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x1406EDB30 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1406EDFE8 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14073AFD8 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140287AA0 (PiListEntryToDependencyEdge.c)
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
