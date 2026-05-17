/*
 * XREFs of DbgUiIssueRemoteBreakin @ 0x1800CD210
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800CD180 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     sub_180005760 @ 0x180005760 (sub_180005760.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall DbgUiIssueRemoteBreakin(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+30h] [rbp-48h]
  __int128 v4; // [rsp+60h] [rbp-18h] BYREF
  __int64 v5; // [rsp+88h] [rbp+10h] BYREF

  v1 = sub_180005760(a1, 0LL, 2, 0, 0LL, 0x4000LL, v3, (__int64)DbgUiRemoteBreakin, 0LL, &v5, &v4);
  if ( v1 >= 0 )
    ZwClose();
  return (unsigned int)v1;
}
