/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1800E44E8
 * Callers:
 *     DllMain @ 0x180088ECC (DllMain.c)
 * Callees:
 *     TraceLoggingUnregister @ 0x1800E3678 (TraceLoggingUnregister.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1800E36E0 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1800E3A8C (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x1800E4018 (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax

  if ( (void (__fastcall *)(LPCGUID, __int64, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1805064D0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    AcquireSRWLockExclusive(&SRWLock);
    v1 = qword_180510430;
    v2 = &qword_180510430;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 336);
      if ( *(int **)(v1 + 328) == &dword_1805064A8 )
      {
        v0 = (void *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete(v1);
        if ( !qword_180510430 )
          TraceLoggingUnregister((TraceLoggingHProvider)&dword_18050C800);
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ReleaseSRWLockExclusive(&SRWLock);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0);
    TraceLoggingUnregister((TraceLoggingHProvider)&dword_1805064A8);
    DestroyAggregateSession(v0);
  }
  else
  {
    TraceLoggingUnregister((TraceLoggingHProvider)&dword_1805064A8);
  }
}
