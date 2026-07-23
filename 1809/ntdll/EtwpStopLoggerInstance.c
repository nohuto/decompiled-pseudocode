/*
 * XREFs of EtwpStopLoggerInstance @ 0x18004CF20
 * Callers:
 *     EtwpStopUmLogger @ 0x18004CFF4 (EtwpStopUmLogger.c)
 *     EtwpLogger @ 0x180059EE0 (EtwpLogger.c)
 * Callees:
 *     EtwpSendSessionNotification @ 0x180050354 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x180050414 (EtwpDisableTraceProviders.c)
 *     RtlWakeAllConditionVariable @ 0x18005A2A0 (RtlWakeAllConditionVariable.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  void *v2; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(unsigned int *)(a1 + 20));
  v2 = *(void **)(a1 + 544);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
  EtwpSendSessionNotification(a1, 2LL, *(unsigned int *)(a1 + 40));
  return 0LL;
}
