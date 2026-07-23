/*
 * XREFs of RtlExitUserProcess @ 0x18006AF00
 * Callers:
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     LdrShutdownProcess @ 0x18006AFD0 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x18006B200 (RtlReportSilentProcessExit.c)
 *     sub_18006B390 @ 0x18006B390 (sub_18006B390.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x18009D140 (ZwTerminateThread.c)
 */

void __cdecl __noreturn RtlExitUserProcess(NTSTATUS ExitStatus)
{
  HANDLE UniqueThread; // rdx
  __int64 v3; // rcx

  sub_180081920();
  sub_18002E73C((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  sub_18002D7BC();
  RtlEnterCriticalSection(&stru_180164FE0);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( ZwTerminateProcess(0LL, ExitStatus) >= 0 )
  {
    sub_18006B390();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    stru_180164FE0.LockSemaphore = 0LL;
    stru_180164FE0.OwningThread = UniqueThread;
    stru_180164FE0.LockCount = -2;
    stru_180164FE0.RecursionCount = 1;
    RtlLeaveCriticalSection(&stru_180164FE0);
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
    LdrShutdownProcess();
  }
  RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
  RtlLeaveCriticalSection(&stru_180164FE0);
  sub_18002D75C(v3, 18, 0);
  ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus);
}
