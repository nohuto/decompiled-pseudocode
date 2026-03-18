/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C01D803C
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C01D719C (TraceLoggingRegisterEx.c)
 *     CreateTlgAggregateSession @ 0x1C01D7AE4 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C01D7C28 (DestroyAggregateSession.c)
 */

TLG_STATUS TlgRegisterAggregateProviderEx()
{
  _QWORD *TlgAggregateSession; // rax
  _QWORD *v1; // rbx
  __int64 v3; // rdx
  TLG_STATUS v4; // esi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 *v7; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(1, 0);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C019A240, 0LL, 0LL);
  TlgAggregateSession[41] = 0LL;
  TlgAggregateSession[42] = 0LL;
  TlgAggregateSession[43] = &dword_1C019A240;
  *((_BYTE *)TlgAggregateSession + 373) = 1;
  v4 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C019A240,
         (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback,
         TlgAggregateSession);
  if ( v4 >= 0 )
  {
    ExAcquirePushLockExclusiveEx(&unk_1C01A2048, 0LL);
    v6 = qword_1C01A6500;
    if ( !qword_1C01A6500 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C019EF30,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v6 = qword_1C01A6500;
    }
    v7 = &qword_1C01A6500;
    while ( v6 )
    {
      if ( *(int **)(v6 + 344) == &dword_1C019A240 )
        goto LABEL_12;
      v7 = (__int64 *)(v6 + 352);
      v6 = *(_QWORD *)(v6 + 352);
    }
    *v7 = (__int64)v1;
LABEL_12:
    ExReleasePushLockExclusiveEx(&unk_1C01A2048, 0LL);
    return 0;
  }
  else
  {
    DestroyAggregateSession(v1, v3, v5);
    return v4;
  }
}
