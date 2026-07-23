/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1407441C4
 * Callers:
 *     CmpRegisterTraceLoggingProvider @ 0x140738AF0 (CmpRegisterTraceLoggingProvider.c)
 *     TlgRegisterAggregateProvider @ 0x1407441A8 (TlgRegisterAggregateProvider.c)
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     TraceLoggingRegisterEx @ 0x14071EED8 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1407442F4 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x140744398 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1409064CC (DestroyAggregateSession.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProviderEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  ETWENABLECALLBACK *v3; // rbp
  __int64 TlgAggregateSession; // rax
  void *v7; // rbx
  TLG_STATUS v8; // edi
  _RTL_BALANCED_NODE *v9; // rax
  signed __int8 v10; // cf
  _RTL_BALANCED_NODE *v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rcx
  char v14; // al

  v3 = pEnableCallback;
  LOBYTE(pEnableCallback) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(0LL, pEnableCallback);
  v7 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx(hProvider, v3, pCallbackContext);
  *(_QWORD *)(TlgAggregateSession + 328) = v3;
  *(_QWORD *)(TlgAggregateSession + 336) = pCallbackContext;
  *(_QWORD *)(TlgAggregateSession + 344) = hProvider;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v8 = TraceLoggingRegisterEx(hProvider, (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback, v7);
  if ( v8 < 0 )
  {
    DestroyAggregateSession(v7);
    return v8;
  }
  else
  {
    v9 = KeAbPreAcquire((ULONG_PTR)&qword_1404C79E8, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1404C79E8, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_1404C79E8, v9, (ULONG_PTR)&qword_1404C79E8);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
    v12 = qword_1404DD428;
    if ( !qword_1404DD428 )
    {
      TraceLoggingRegisterEx(&stru_1404013B8, (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback, 0LL);
      v12 = qword_1404DD428;
    }
    v13 = &qword_1404DD428;
    while ( v12 )
    {
      if ( *(TraceLoggingHProvider *)(v12 + 344) == hProvider )
        goto LABEL_14;
      v13 = (__int64 *)(v12 + 352);
      v12 = *(_QWORD *)(v12 + 352);
    }
    *v13 = (__int64)v7;
LABEL_14:
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404C79E8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404C79E8);
    KeAbPostRelease((ULONG_PTR)&qword_1404C79E8);
    return 0;
  }
}
