/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C03550F0
 * Callers:
 *     EnableUserkTraceLogging @ 0x1C012CEF0 (EnableUserkTraceLogging.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C03551D4 (TraceLoggingRegisterEx.c)
 *     CreateTlgAggregateSession @ 0x1C0355270 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C0355820 (DestroyAggregateSession.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProviderEx(__int64 a1)
{
  __int64 TlgAggregateSession; // rax
  void *v2; // rbx
  TLG_STATUS v3; // esi
  __int64 v4; // rax
  __int64 *v5; // rcx

  LOBYTE(a1) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(a1, 0LL);
  v2 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C030C240, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C030C240;
  *(_BYTE *)(TlgAggregateSession + 373) = 1;
  v3 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C030C240,
         TlgAggregateInternalRegisteredProviderEtwCallback,
         (PVOID)TlgAggregateSession);
  if ( v3 < 0 )
  {
    DestroyAggregateSession(v2);
    return v3;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C03197F8, 0LL);
    v4 = qword_1C0319800;
    if ( !qword_1C0319800 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C030C438, TlgAggregateInternalProviderCallback, 0LL);
      v4 = qword_1C0319800;
    }
    v5 = &qword_1C0319800;
    while ( v4 )
    {
      if ( *(int **)(v4 + 344) == &dword_1C030C240 )
        goto LABEL_8;
      v5 = (__int64 *)(v4 + 352);
      v4 = *(_QWORD *)(v4 + 352);
    }
    *v5 = (__int64)v2;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C03197F8, 0LL);
    return 0;
  }
}
