/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C008BDBC
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C008C144 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C008BEB0 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1C008BF4C (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C008BFF0 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C00CE190 (DestroyAggregateSession.c)
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
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &hProvider;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v4 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&hProvider,
         (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback,
         v3);
  if ( v4 < 0 )
  {
    DestroyAggregateSession(v3);
    return v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C004E598, 0LL);
    v5 = qword_1C004E788;
    if ( !qword_1C004E788 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C004E080,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v5 = qword_1C004E788;
    }
    v6 = &qword_1C004E788;
    while ( v5 )
    {
      if ( *(int **)(v5 + 344) == &hProvider )
        goto LABEL_8;
      v6 = (__int64 *)(v5 + 352);
      v5 = *(_QWORD *)(v5 + 352);
    }
    *v6 = (__int64)v3;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C004E598, 0LL);
    return 0;
  }
}
