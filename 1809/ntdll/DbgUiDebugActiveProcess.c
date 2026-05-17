/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800CE9D0
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800A1BD0 (NtDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x1800A3010 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CEA60 (DbgUiIssueRemoteBreakin.c)
 */

__int64 __fastcall DbgUiDebugActiveProcess(__int64 a1)
{
  int active; // ebx

  active = NtDebugActiveProcess();
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(a1);
    if ( active < 0 )
      ZwRemoveProcessDebug();
  }
  return (unsigned int)active;
}
