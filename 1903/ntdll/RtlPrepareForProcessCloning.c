/*
 * XREFs of RtlPrepareForProcessCloning @ 0x18009BA20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_1800D4F38 @ 0x1800D4F38 (sub_1800D4F38.c)
 *     sub_1800D5668 @ 0x1800D5668 (sub_1800D5668.c)
 *     sub_1800D5D4C @ 0x1800D5D4C (sub_1800D5D4C.c)
 *     sub_1800DE328 @ 0x1800DE328 (sub_1800DE328.c)
 *     sub_1800DE3D0 @ 0x1800DE3D0 (sub_1800DE3D0.c)
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  __int64 v0; // rcx
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  volatile signed __int64 *v4; // rbx
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 result; // rax

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  sub_18002E73C(0);
  sub_18002D7BC(v0);
  RtlEnterCriticalSection((__int64)&unk_1801652C0);
  sub_1800DE3D0();
  RtlEnterCriticalSection((__int64)&unk_180164FE0);
  RtlAcquireSRWLockShared(&qword_1801661B8, v1, v2, v3);
  v4 = (volatile signed __int64 *)&unk_1801661C8;
  v5 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v4);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  RtlAcquireSRWLockExclusive(&qword_180166380);
  sub_1800D5D4C(0LL);
  v6 = sub_1800EF084();
  if ( v6 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&qword_1801662F8);
    RtlAcquireSRWLockExclusive(&qword_1801662E8);
    result = 0LL;
    byte_180164EF9 = 1;
  }
  else
  {
    sub_1800D5D4C(2LL);
    RtlReleaseSRWLockExclusive(&qword_180166380);
    sub_1800D5668(0LL);
    RtlLeaveCriticalSection((__int64)&unk_180164FE0);
    sub_1800DE328(v7, 0LL);
    sub_1800D4F38(0LL);
    return (unsigned int)v6;
  }
  return result;
}
