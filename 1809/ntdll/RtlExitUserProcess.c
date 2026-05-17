/*
 * XREFs of RtlExitUserProcess @ 0x18006CF90
 * Callers:
 *     RtlExitUserThread @ 0x18005A8F0 (RtlExitUserThread.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrShutdownProcess @ 0x1800290F0 (LdrShutdownProcess.c)
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     RtlReportSilentProcessExit @ 0x18006D060 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18006D1EC (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlLockHeap @ 0x18006D5A0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18006D640 (RtlUnlockHeap.c)
 *     EtwpShutdownPrivateLoggers @ 0x180086170 (EtwpShutdownPrivateLoggers.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A0D40 (NtTerminateThread.c)
 */

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  void *UniqueThread; // rdx
  __int64 v4; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    LdrpReleaseLoaderLock(v4, 18, 0);
    return NtTerminateThread(-2LL, a1);
  }
  else
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180164FD8 = 0LL;
    qword_180164FD0 = (__int64)UniqueThread;
    dword_180164FC8 = -2;
    dword_180164FCC = 1;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
