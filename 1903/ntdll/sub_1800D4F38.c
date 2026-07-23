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

NTSTATUS __fastcall sub_1800D4F38(int a1)
{
  HANDLE UniqueThread; // rcx
  HANDLE v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    stru_1801652C0.LockSemaphore = 0LL;
    stru_1801652C0.OwningThread = UniqueThread;
    stru_1801652C0.RecursionCount = 1;
    stru_1801652C0.LockCount = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    stru_18015F4F8.LockSemaphore = 0LL;
    stru_18015F4F8.OwningThread = v2;
    stru_18015F4F8.LockCount = -2;
    stru_18015F4F8.RecursionCount = 1;
    v3 = sub_18007D01C();
    if ( v3 < 0 )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
    Work = 0LL;
  }
  RtlLeaveCriticalSection(&stru_1801652C0);
  sub_18002D75C(v4, 13, 0);
  return sub_180073E1C();
}
