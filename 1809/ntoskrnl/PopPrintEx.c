/*
 * XREFs of PopPrintEx @ 0x14014240C
 * Callers:
 *     PopCoalescingSetTimer @ 0x1402DB830 (PopCoalescingSetTimer.c)
 *     PopSessionInputChange @ 0x1406DC520 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x1406DC820 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1406DC9D8 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DCAB8 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionClosed @ 0x1406E1418 (PopSessionClosed.c)
 *     PopSessionConnectionChange @ 0x14071D6A8 (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x14071D7F4 (PopSetSessionDisplayStatus.c)
 *     PopSessionCreated @ 0x14071F010 (PopSessionCreated.c)
 *     PoFxRegisterDevice @ 0x140725580 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407515AC (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x14086B5D0 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x14086F730 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408731D4 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140873200 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x140878CB4 (PopCheckConsoleTimeouts.c)
 *     PopSessionWinlogonNotification @ 0x14087901C (PopSessionWinlogonNotification.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126330 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&File, 0x92u, Level, a2, va, 1);
}
