/*
 * XREFs of PopPrintEx @ 0x14014252C
 * Callers:
 *     PopCoalescingSetTimer @ 0x1402DBB20 (PopCoalescingSetTimer.c)
 *     PopSessionInputChange @ 0x1406DD7A0 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x1406DDAA0 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1406DDC58 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DDD38 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionClosed @ 0x1406E2698 (PopSessionClosed.c)
 *     PopSessionConnectionChange @ 0x14071E928 (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x14071EA74 (PopSetSessionDisplayStatus.c)
 *     PopSessionCreated @ 0x140720290 (PopSessionCreated.c)
 *     PoFxRegisterDevice @ 0x140726800 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x14075277C (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x14086C810 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x140870970 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140874414 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140874440 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x140879EF4 (PopCheckConsoleTimeouts.c)
 *     PopSessionWinlogonNotification @ 0x14087A25C (PopSessionWinlogonNotification.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126420 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&File, 0x92u, Level, a2, va, 1);
}
