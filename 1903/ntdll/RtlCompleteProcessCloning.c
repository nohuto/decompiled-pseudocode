/*
 * XREFs of RtlCompleteProcessCloning @ 0x18009B8E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x18006D270 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007D130 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_1800D4F38 @ 0x1800D4F38 (sub_1800D4F38.c)
 *     sub_1800D5668 @ 0x1800D5668 (sub_1800D5668.c)
 *     sub_1800D5D4C @ 0x1800D5D4C (sub_1800D5D4C.c)
 *     sub_1800DE328 @ 0x1800DE328 (sub_1800DE328.c)
 *     sub_1800EF8F8 @ 0x1800EF8F8 (sub_1800EF8F8.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  unsigned int v2; // edi
  HANDLE UniqueThread; // rdx
  __int64 v4; // rcx

  if ( a1 )
  {
    qword_1801662F8 = 1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180164FF8 = 0LL;
    qword_180164FF0 = (__int64)UniqueThread;
    dword_180164FE8 = -2;
    dword_180164FEC = 1;
  }
  else
  {
    byte_180164EF9 = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&qword_1801662E8);
  }
  RtlReleaseSRWLockExclusive(&qword_1801662F8);
  sub_1800D5D4C(v2);
  if ( v2 == 1 )
    qword_180166380 = 1LL;
  else
    RtlReleaseSRWLockExclusive(&qword_180166380);
  sub_1800EF8F8(a1);
  sub_1800D5668(a1);
  RtlLeaveCriticalSection((__int64)&unk_180164FE0);
  sub_1800DE328(v4, a1);
  sub_1800D4F38(a1);
  if ( a1 )
  {
    byte_180164EF9 = 0;
    RtlAcquireReleaseSRWLockExclusive(&qword_1801662E8);
    RtlWakeAllConditionVariable(&qword_1801662F0);
  }
}
