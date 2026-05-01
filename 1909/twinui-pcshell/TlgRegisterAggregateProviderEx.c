/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x180125814
 * Callers:
 *     DllMain @ 0x18008E868 (DllMain.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1800830A0 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx @ 0x1800848C8 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x180124D6C (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x180125034 (CreateTlgAggregateSession.c)
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
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1805B8730, 0LL, 0LL);
  TlgAggregateSession[39].Ptr = 0LL;
  TlgAggregateSession[40].Ptr = 0LL;
  TlgAggregateSession[41].Ptr = &dword_1805B8730;
  LODWORD(TlgAggregateSession[44].Ptr) = ComputeFlushPeriod((__int64)TlgAggregateSession);
  v3 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1805B8730,
         (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback,
         v1);
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(&stru_1805C1EE8);
    v4 = qword_1805C1EF0;
    if ( !qword_1805C1EF0 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1805B8688,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v4 = qword_1805C1EF0;
    }
    v5 = &qword_1805C1EF0;
    while ( v4 )
    {
      if ( *(int **)(v4 + 328) == &dword_1805B8730 )
        goto LABEL_12;
      v5 = (__int64 *)(v4 + 336);
      v4 = *(_QWORD *)(v4 + 336);
    }
    *v5 = (__int64)v1;
LABEL_12:
    ReleaseSRWLockExclusive(&stru_1805C1EE8);
    return 0;
  }
  else
  {
    DestroyAggregateSession(v1);
    return v3;
  }
}
