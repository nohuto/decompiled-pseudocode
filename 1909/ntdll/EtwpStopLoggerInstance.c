/*
 * XREFs of EtwpStopLoggerInstance @ 0x180087534
 * Callers:
 *     EtwpLogger @ 0x18006D190 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180087300 (EtwpStopUmLogger.c)
 * Callees:
 *     EtwpSendSessionNotification @ 0x180005D10 (EtwpSendSessionNotification.c)
 *     RtlWakeAllConditionVariable @ 0x18006D4C0 (RtlWakeAllConditionVariable.c)
 *     EtwpDisableTraceProviders @ 0x1800875B4 (EtwpDisableTraceProviders.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  void *v2; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(unsigned int *)(a1 + 20));
  v2 = *(void **)(a1 + 560);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 560) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
  EtwpSendSessionNotification(a1, 2, *(_DWORD *)(a1 + 40));
  return 0LL;
}
