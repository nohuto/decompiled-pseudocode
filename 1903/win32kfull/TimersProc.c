/*
 * XREFs of TimersProc @ 0x1C00D85D0
 * Callers:
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 * Callees:
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C00D8A00 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C01EBDC4 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01EBE60 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ThreadLockExchangeWorker @ 0x1C01EC098 (ThreadLockExchangeWorker.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOLEAN TimersProc()
{
  unsigned int DLT; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  BOOLEAN result; // al
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h]
  __int64 v6; // [rsp+40h] [rbp-38h]

  gbTimersProcActive = 1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  gbRITAlerted = 0;
  DLT = DLT_HANDLEMANAGER::getDLT();
  GetDomainLockRef(DLT);
  do
  {
    gbRITRescan = 0;
    gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v4;
    v5 = 0LL;
    ThreadUnlockWorker1(gptiCurrent, v1, v2);
  }
  while ( gbRITRescan );
  gdmsNextTimer = 0x7FFFFFFF;
  guNextCoalescableTimerDue = 0x7FFFFFFF;
  result = KeSetTimer(gptmrMaster, (LARGE_INTEGER)-21474836470000LL, 0LL);
  gbTimersProcActive = 0;
  return result;
}
