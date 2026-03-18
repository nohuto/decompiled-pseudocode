/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C0156FD0
 * Callers:
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C001F5FC (-DxgkInitializeTelemetry@@YAXXZ.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C01570C4 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1C0157160 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C0157204 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C029E55C (DestroyAggregateSession.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProviderEx(__int64 a1, __int64 a2)
{
  __int64 TlgAggregateSession; // rax
  void *v3; // rbx
  TLG_STATUS v4; // esi
  __int64 v5; // rax
  __int64 *v6; // rcx

  LOBYTE(a2) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(0LL, a2);
  v3 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C008D838, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C008D838;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v4 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C008D838,
         (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback,
         v3);
  if ( v4 < 0 )
  {
    DestroyAggregateSession(v3);
    return v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C008EF60, 0LL);
    v5 = qword_1C008FB68;
    if ( !qword_1C008FB68 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C008D918,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v5 = qword_1C008FB68;
    }
    v6 = &qword_1C008FB68;
    while ( v5 )
    {
      if ( *(_UNKNOWN **)(v5 + 344) == &dword_1C008D838 )
        goto LABEL_8;
      v6 = (__int64 *)(v5 + 352);
      v5 = *(_QWORD *)(v5 + 352);
    }
    *v6 = (__int64)v3;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C008EF60, 0LL);
    return 0;
  }
}
