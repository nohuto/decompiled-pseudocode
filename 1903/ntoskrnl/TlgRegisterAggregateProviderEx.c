/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x14074EB10
 * Callers:
 *     TlgRegisterAggregateProvider @ 0x14074EAF4 (TlgRegisterAggregateProvider.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1407574C4 (CmpRegisterTraceLoggingProvider.c)
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     TraceLoggingRegisterEx @ 0x140745F64 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x14074EC40 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x14074ECE4 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x140943824 (DestroyAggregateSession.c)
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
    v9 = KeAbPreAcquire((ULONG_PTR)&qword_1404F2E50, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1404F2E50, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_1404F2E50, v9, (ULONG_PTR)&qword_1404F2E50);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
    v12 = qword_140509AE0;
    if ( !qword_140509AE0 )
    {
      TraceLoggingRegisterEx(&stru_140427098, (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback, 0LL);
      v12 = qword_140509AE0;
    }
    v13 = &qword_140509AE0;
    while ( v12 )
    {
      if ( *(TraceLoggingHProvider *)(v12 + 344) == hProvider )
        goto LABEL_14;
      v13 = (__int64 *)(v12 + 352);
      v12 = *(_QWORD *)(v12 + 352);
    }
    *v13 = (__int64)v7;
LABEL_14:
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404F2E50, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404F2E50);
    KeAbPostRelease((ULONG_PTR)&qword_1404F2E50);
    return 0;
  }
}
