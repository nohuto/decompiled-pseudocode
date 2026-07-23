/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800CD180
 * Callers:
 *     <none>
 * Callees:
 *     ZwDebugActiveProcess @ 0x18009DFF0 (ZwDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x18009F430 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CD210 (DbgUiIssueRemoteBreakin.c)
 */

NTSTATUS __cdecl DbgUiDebugActiveProcess(HANDLE Process)
{
  int active; // ebx

  active = ZwDebugActiveProcess(Process, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(Process);
    if ( active < 0 )
      ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
  }
  return active;
}
