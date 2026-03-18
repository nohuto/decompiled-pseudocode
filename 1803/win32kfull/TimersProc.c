/*
 * XREFs of TimersProc @ 0x1C001D6A0
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 * Callees:
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C001DA78 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C01B3E04 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01B3EA0 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOLEAN __fastcall TimersProc(__int64 a1, __int64 a2, __int64 a3)
{
  BOOLEAN result; // al
  _QWORD v4[4]; // [rsp+30h] [rbp-48h] BYREF

  gbTimersProcActive = 1;
  gbRITAlerted = 0;
  do
  {
    gbRITRescan = 0;
    gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v4;
    v4[1] = 0LL;
    ThreadUnlock1(gptiCurrent, a2, a3);
  }
  while ( gbRITRescan );
  gdmsNextTimer = 0x7FFFFFFF;
  guNextCoalescableTimerDue = 0x7FFFFFFF;
  result = KeSetTimer(gptmrMaster, (LARGE_INTEGER)-21474836470000LL, 0LL);
  gbTimersProcActive = 0;
  return result;
}
