/*
 * XREFs of PiEnumerateDependentListEntry @ 0x14085DF68
 * Callers:
 *     PipAttemptDependentsStart @ 0x1406FED00 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x14072EF54 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14072F35C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140731698 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140770138 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14029D9AC (PiListEntryToDependencyEdge.c)
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
