/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800D7168
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D8540 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D8820 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8AC0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpCreateLoaderEvents @ 0x180063114 (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  __int64 v3; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801652B8 = 0LL;
    qword_1801652B0 = (__int64)UniqueThread;
    dword_1801652AC = 1;
    dword_1801652A8 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015F5E0 = 0LL;
    qword_18015F5D8 = (__int64)v2;
    dword_18015F5D0 = -2;
    dword_18015F5D4 = 1;
    if ( (int)LdrpCreateLoaderEvents() < 0 )
      ZwTerminateProcess();
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v3, 13, 0);
  return LdrpDropLastInProgressCount();
}
