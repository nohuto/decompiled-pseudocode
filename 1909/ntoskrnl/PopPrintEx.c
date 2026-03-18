/*
 * XREFs of PopPrintEx @ 0x140126AC8
 * Callers:
 *     PopCoalescingSetTimer @ 0x1402F6EA8 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1405B5450 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140725AC4 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x140725CE4 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140725FC0 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407260A0 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionClosed @ 0x140729998 (PopSessionClosed.c)
 *     PopSetSessionDisplayStatus @ 0x14073CED8 (PopSetSessionDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x1407487A8 (PopSessionConnectionChange.c)
 *     PopSessionCreated @ 0x140749D30 (PopSessionCreated.c)
 *     PoFxRegisterDevice @ 0x140771C60 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x14077C498 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x1408A70F0 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x1408ABAF0 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408AF7BC (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1408AF7E8 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x1408B57E4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126BD0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x92u, Level, va, 1);
}
