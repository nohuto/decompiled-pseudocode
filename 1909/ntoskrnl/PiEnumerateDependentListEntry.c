/*
 * XREFs of PiEnumerateDependentListEntry @ 0x14085D668
 * Callers:
 *     PipAttemptDependentsStart @ 0x140700AE0 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407311B4 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x1407315BC (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1407338F8 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14077371C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14029D70C (PiListEntryToDependencyEdge.c)
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
