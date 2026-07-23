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
  _RTL_SRWLOCK *v0; // rbx
  __int64 v1; // rdi
  int v2; // ebx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  sub_18002E73C(0);
  sub_18002D7BC();
  RtlEnterCriticalSection(&stru_1801652C0);
  sub_1800DE3D0();
  RtlEnterCriticalSection(&stru_180164FE0);
  RtlAcquireSRWLockShared(&stru_1801661B8);
  v0 = &stru_1801661C8;
  v1 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
  RtlAcquireSRWLockExclusive(&stru_180166380);
  sub_1800D5D4C(0LL);
  v2 = sub_1800EF084();
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_1801662F8);
    RtlAcquireSRWLockExclusive(&stru_1801662E8);
    result = 0LL;
    byte_180164EF9 = 1;
  }
  else
  {
    sub_1800D5D4C(2LL);
    RtlReleaseSRWLockExclusive(&stru_180166380);
    sub_1800D5668(0LL);
    RtlLeaveCriticalSection(&stru_180164FE0);
    sub_1800DE328(v3, 0LL);
    sub_1800D4F38(0LL);
    return (unsigned int)v2;
  }
  return result;
}
