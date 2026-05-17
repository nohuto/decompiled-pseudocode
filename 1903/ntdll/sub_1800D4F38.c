/*
 * XREFs of sub_1800D4F38 @ 0x1800D4F38
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009B8E0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18007D01C @ 0x18007D01C (sub_18007D01C.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 */

__int64 __fastcall sub_1800D4F38(int a1)
{
  HANDLE UniqueThread; // rcx
  HANDLE v2; // rcx
  __int64 v3; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801652D8 = 0LL;
    qword_1801652D0 = (__int64)UniqueThread;
    dword_1801652CC = 1;
    dword_1801652C8 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015F510 = 0LL;
    qword_18015F508 = (__int64)v2;
    dword_18015F500 = -2;
    dword_18015F504 = 1;
    if ( (int)sub_18007D01C() < 0 )
      ZwTerminateProcess();
    qword_180165288 = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&unk_1801652C0);
  sub_18002D75C(v3, 13, 0);
  return sub_180073E1C();
}
