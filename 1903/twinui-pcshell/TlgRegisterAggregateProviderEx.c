/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x180106804
 * Callers:
 *     DllMain @ 0x18008BC28 (DllMain.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1800809E0 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx @ 0x180081C14 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x180105D5C (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x180106024 (CreateTlgAggregateSession.c)
 */

TLG_STATUS TlgRegisterAggregateProviderEx()
{
  RTL_SRWLOCK *TlgAggregateSession; // rax
  RTL_SRWLOCK *v1; // rbx
  TLG_STATUS v3; // esi
  __int64 v4; // rax
  __int64 *v5; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(1);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180590558, 0LL, 0LL);
  TlgAggregateSession[39].Ptr = 0LL;
  TlgAggregateSession[40].Ptr = 0LL;
  TlgAggregateSession[41].Ptr = &dword_180590558;
  LODWORD(TlgAggregateSession[44].Ptr) = ComputeFlushPeriod((__int64)TlgAggregateSession);
  v3 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_180590558,
         (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback,
         v1);
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(&stru_180599AC8);
    v4 = qword_180599AD0;
    if ( !qword_180599AD0 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1805904E8,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v4 = qword_180599AD0;
    }
    v5 = &qword_180599AD0;
    while ( v4 )
    {
      if ( *(int **)(v4 + 328) == &dword_180590558 )
        goto LABEL_12;
      v5 = (__int64 *)(v4 + 336);
      v4 = *(_QWORD *)(v4 + 336);
    }
    *v5 = (__int64)v1;
LABEL_12:
    ReleaseSRWLockExclusive(&stru_180599AC8);
    return 0;
  }
  else
  {
    DestroyAggregateSession(v1);
    return v3;
  }
}
