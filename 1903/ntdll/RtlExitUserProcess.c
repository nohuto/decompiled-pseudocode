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

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  __int64 v2; // rcx
  HANDLE UniqueThread; // rdx
  __int64 v5; // rcx

  sub_180081920();
  sub_18002E73C((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  sub_18002D7BC(v2);
  RtlEnterCriticalSection((__int64)&unk_180164FE0);
  RtlLockHeap((__int64)NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockHeap((__int64)NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection((__int64)&unk_180164FE0);
    sub_18002D75C(v5, 18, 0);
    return ZwTerminateThread(-2LL, a1);
  }
  else
  {
    sub_18006B390();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180164FF8 = 0LL;
    qword_180164FF0 = (__int64)UniqueThread;
    dword_180164FE8 = -2;
    dword_180164FEC = 1;
    RtlLeaveCriticalSection((__int64)&unk_180164FE0);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
