/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C02002C8
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C02003AC (TraceLoggingRegisterEx.c)
 *     CreateTlgAggregateSession @ 0x1C0200448 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C02007C4 (DestroyAggregateSession.c)
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
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01C75D8, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C01C75D8;
  *(_BYTE *)(TlgAggregateSession + 373) = 1;
  v3 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C01C75D8,
         (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback,
         (PVOID)TlgAggregateSession);
  if ( v3 < 0 )
  {
    DestroyAggregateSession(v2);
    return v3;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C01D0F68, 0LL);
    v4 = qword_1C01D0F70;
    if ( !qword_1C01D0F70 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C01C7A00,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v4 = qword_1C01D0F70;
    }
    v5 = &qword_1C01D0F70;
    while ( v4 )
    {
      if ( *(int **)(v4 + 344) == &dword_1C01C75D8 )
        goto LABEL_8;
      v5 = (__int64 *)(v4 + 352);
      v4 = *(_QWORD *)(v4 + 352);
    }
    *v5 = (__int64)v2;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C01D0F68, 0LL);
    return 0;
  }
}
