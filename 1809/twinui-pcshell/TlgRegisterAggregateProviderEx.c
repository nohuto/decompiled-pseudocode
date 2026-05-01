/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1800E43E4
 * Callers:
 *     DllMain @ 0x180088ECC (DllMain.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x18007EF98 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1800E3738 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1800E39F8 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1800E3A8C (DestroyAggregateSession.c)
 */

TLG_STATUS TlgRegisterAggregateProviderEx()
{
  __int64 TlgAggregateSession; // rax
  void *v1; // rbx
  TLG_STATUS v3; // esi
  __int64 v4; // rax
  __int64 *v5; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(1);
  v1 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1805064A8, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 312) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 320) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 328) = &dword_1805064A8;
  *(_DWORD *)(TlgAggregateSession + 352) = ComputeFlushPeriod(TlgAggregateSession);
  v3 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1805064A8,
         (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback,
         v1);
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    v4 = qword_180510430;
    if ( !qword_180510430 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_18050C800,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v4 = qword_180510430;
    }
    v5 = &qword_180510430;
    while ( v4 )
    {
      if ( *(int **)(v4 + 328) == &dword_1805064A8 )
        goto LABEL_12;
      v5 = (__int64 *)(v4 + 336);
      v4 = *(_QWORD *)(v4 + 336);
    }
    *v5 = (__int64)v1;
LABEL_12:
    ReleaseSRWLockExclusive(&SRWLock);
    return 0;
  }
  else
  {
    DestroyAggregateSession(v1);
    return v3;
  }
}
