/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1800808F8
 * Callers:
 *     DllMain @ 0x18008BC28 (DllMain.c)
 * Callees:
 *     TraceLoggingUnregister @ 0x1800809B8 (TraceLoggingUnregister.c)
 *     DestroyAggregateSession @ 0x1800809E0 (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x180080A14 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x180080A6C (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax

  if ( (void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))qword_180590580 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    AcquireSRWLockExclusive(&stru_180599AC8);
    v1 = qword_180599AD0;
    v2 = &qword_180599AD0;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 336);
      if ( *(int **)(v1 + 328) == &dword_180590558 )
      {
        v0 = (void *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete();
        if ( !qword_180599AD0 )
          TraceLoggingUnregister((TraceLoggingHProvider)&dword_1805904E8);
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ReleaseSRWLockExclusive(&stru_180599AC8);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    TraceLoggingUnregister((TraceLoggingHProvider)&dword_180590558);
    DestroyAggregateSession(v0);
  }
  else
  {
    TraceLoggingUnregister((TraceLoggingHProvider)&dword_180590558);
  }
}
