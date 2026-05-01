/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x180082FB8
 * Callers:
 *     DllMain @ 0x18008E868 (DllMain.c)
 * Callees:
 *     TraceLoggingUnregister @ 0x180083078 (TraceLoggingUnregister.c)
 *     DestroyAggregateSession @ 0x1800830A0 (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1800830D4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x18008312C (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax

  if ( (void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))qword_1805B8758 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    AcquireSRWLockExclusive(&stru_1805C1EE8);
    v1 = qword_1805C1EF0;
    v2 = &qword_1805C1EF0;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 336);
      if ( *(int **)(v1 + 328) == &dword_1805B8730 )
      {
        v0 = (void *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete();
        if ( !qword_1805C1EF0 )
          TraceLoggingUnregister((TraceLoggingHProvider)&dword_1805B8688);
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ReleaseSRWLockExclusive(&stru_1805C1EE8);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    TraceLoggingUnregister((TraceLoggingHProvider)&dword_1805B8730);
    DestroyAggregateSession(v0);
  }
  else
  {
    TraceLoggingUnregister((TraceLoggingHProvider)&dword_1805B8730);
  }
}
