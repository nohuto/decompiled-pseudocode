/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800CD180
 * Callers:
 *     <none>
 * Callees:
 *     ZwDebugActiveProcess @ 0x18009DFF0 (ZwDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x18009F430 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CD210 (DbgUiIssueRemoteBreakin.c)
 */

__int64 __fastcall DbgUiDebugActiveProcess(__int64 a1)
{
  int active; // ebx

  active = ZwDebugActiveProcess();
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(a1);
    if ( active < 0 )
      ZwRemoveProcessDebug();
  }
  return (unsigned int)active;
}
