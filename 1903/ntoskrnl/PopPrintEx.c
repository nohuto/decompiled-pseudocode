/*
 * XREFs of PopPrintEx @ 0x140126458
 * Callers:
 *     PopCoalescingSetTimer @ 0x1402F73F8 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1405B5070 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140723C24 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x140723E44 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140724120 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x140724200 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionClosed @ 0x140728628 (PopSessionClosed.c)
 *     PopSetSessionDisplayStatus @ 0x14073AF78 (PopSetSessionDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x1407468A8 (PopSessionConnectionChange.c)
 *     PopSessionCreated @ 0x140747E30 (PopSessionCreated.c)
 *     PoFxRegisterDevice @ 0x14076EE00 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140778EB8 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x1408A7890 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x1408AC290 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408AFF5C (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1408AFF88 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x1408B5F14 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126560 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x92u, Level, va, 1);
}
