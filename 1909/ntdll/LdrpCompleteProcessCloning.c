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

NTSTATUS __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  NTSTATUS LoaderEvents; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpWorkQueueLock.LockSemaphore = 0LL;
    LdrpWorkQueueLock.OwningThread = UniqueThread;
    LdrpWorkQueueLock.RecursionCount = 1;
    LdrpWorkQueueLock.LockCount = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpLoaderLock.LockSemaphore = 0LL;
    LdrpLoaderLock.OwningThread = v2;
    LdrpLoaderLock.LockCount = -2;
    LdrpLoaderLock.RecursionCount = 1;
    LoaderEvents = LdrpCreateLoaderEvents();
    if ( LoaderEvents < 0 )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, LoaderEvents);
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v4, 13, 0);
  return LdrpDropLastInProgressCount();
}
