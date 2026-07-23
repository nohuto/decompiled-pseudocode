/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800CE9D0
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800A1BF0 (NtDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x1800A3030 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CEA60 (DbgUiIssueRemoteBreakin.c)
 */

NTSTATUS __cdecl DbgUiDebugActiveProcess(HANDLE Process)
{
  int active; // ebx

  active = NtDebugActiveProcess(Process, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(Process);
    if ( active < 0 )
      ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
  }
  return active;
}
