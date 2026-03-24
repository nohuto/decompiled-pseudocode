/*
 * XREFs of PopPrintEx @ 0x14014242C
 * Callers:
 *     PopCoalescingSetTimer @ 0x1402DB930 (PopCoalescingSetTimer.c)
 *     PopSessionInputChange @ 0x1406DC500 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x1406DC800 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1406DC9B8 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DCA98 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionClosed @ 0x1406E13F8 (PopSessionClosed.c)
 *     PopSessionConnectionChange @ 0x14071D688 (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x14071D7D4 (PopSetSessionDisplayStatus.c)
 *     PopSessionCreated @ 0x14071EFF0 (PopSessionCreated.c)
 *     PoFxRegisterDevice @ 0x140725560 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x14075158C (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x14086B5B0 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x14086F710 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408731B4 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1408731E0 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x140878C94 (PopCheckConsoleTimeouts.c)
 *     PopSessionWinlogonNotification @ 0x140878FFC (PopSessionWinlogonNotification.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126350 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&File, 0x92u, Level, a2, va, 1);
}
