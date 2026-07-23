/*
 * XREFs of DbgUiIssueRemoteBreakin @ 0x1800CD210
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800CD180 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     sub_180005760 @ 0x180005760 (sub_180005760.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

NTSTATUS __cdecl DbgUiIssueRemoteBreakin(HANDLE Process)
{
  int v1; // ebx
  int v3; // [rsp+30h] [rbp-48h]
  __int128 v4; // [rsp+60h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF

  v1 = sub_180005760(
         Process,
         0LL,
         2,
         0,
         0LL,
         0x4000uLL,
         v3,
         (PUSER_THREAD_START_ROUTINE)DbgUiRemoteBreakin,
         0LL,
         &Handle,
         &v4);
  if ( v1 >= 0 )
    ZwClose(Handle);
  return v1;
}
