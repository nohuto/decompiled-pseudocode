/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C015DF98
 * Callers:
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C001EED4 (-DxgkInitializeTelemetry@@YAXXZ.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C015E08C (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1C015E128 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C015E1CC (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C02D1024 (DestroyAggregateSession.c)
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
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C00A1888, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C00A1888;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v4 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C00A1888,
         (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback,
         v3);
  if ( v4 < 0 )
  {
    DestroyAggregateSession(v3);
    return v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C00A2F90, 0LL);
    v5 = qword_1C00A3BA0;
    if ( !qword_1C00A3BA0 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C00A1968,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v5 = qword_1C00A3BA0;
    }
    v6 = &qword_1C00A3BA0;
    while ( v5 )
    {
      if ( *(_UNKNOWN **)(v5 + 344) == &dword_1C00A1888 )
        goto LABEL_8;
      v6 = (__int64 *)(v5 + 352);
      v5 = *(_QWORD *)(v5 + 352);
    }
    *v6 = (__int64)v3;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C00A2F90, 0LL);
    return 0;
  }
}
