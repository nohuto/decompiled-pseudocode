/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800D4FF8
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009BF80 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009C0C0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18002D75C (LdrpReleaseLoaderLock.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     LdrpCreateLoaderEvents @ 0x18007D6BC (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x18009D410 (ZwTerminateProcess.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
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
    if ( (int)LdrpCreateLoaderEvents() < 0 )
      ZwTerminateProcess();
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v3, 13, 0);
  return LdrpDropLastInProgressCount();
}
