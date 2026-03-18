/*
 * XREFs of EtwpFreeLoggerContext @ 0x1406B717C
 * Callers:
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x1406B76B0 (EtwpLogger.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140099580 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x140099640 (ExReInitializeRundownProtectionCacheAware.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExReleaseExtensionTable @ 0x1400FB6A8 (ExReleaseExtensionTable.c)
 *     EtwpFreeCompression @ 0x140108D64 (EtwpFreeCompression.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140108DC8 (EtwpCancelPendingStackwalkApcs.c)
 *     KeRemoveQueueDpc @ 0x140108E20 (KeRemoveQueueDpc.c)
 *     ExDeleteTimer @ 0x140113AD0 (ExDeleteTimer.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C7020 (ObDereferenceSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     EtwpFreeTraceBufferPool @ 0x1406B7440 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406B7560 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpSynchronizeWithElevatedIrqlLogging @ 0x1408FB0D4 (EtwpSynchronizeWithElevatedIrqlLogging.c)
 *     EtwpFreeStackCache @ 0x140900ADC (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x1409072E0 (EtwpCancelMemoryPreservation.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 v4; // r15
  ULONG_PTR v5; // rcx
  void *v6; // rcx
  UNICODE_STRING *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  _QWORD *v15; // rbx
  void *v16; // rcx
  char *v17; // rbx
  char *v18; // rbx
  char *v19; // rcx
  PRKEVENT *v20; // rbx
  void *v21; // rcx
  PVOID *v22; // rsi
  _QWORD *v23; // rbx
  __int64 v24; // rbp
  char *v25; // rcx
  _QWORD *v26; // rcx
  _QWORD v27[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)P + 139);
  EtwpRealtimeDisconnectAllConsumers();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 704), 0LL);
  *((_DWORD *)P + 208) |= 0x200u;
  if ( (*((_DWORD *)P + 209) & 0x20) != 0 )
  {
    v20 = (PRKEVENT *)*((_QWORD *)P + 46);
    *((_QWORD *)P + 46) = 0LL;
    *((_DWORD *)P + 14) = 0;
    _InterlockedAnd((volatile signed __int32 *)P + 209, 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(P + 472), 0, 0);
    KeSetEvent(v20[6], 0, 0);
    ObfDereferenceObject(v20);
  }
  ExReleasePushLockEx((ULONG_PTR)(P + 704), 0LL);
  v3 = *(unsigned int *)P;
  EtwpCancelPendingStackwalkApcs((unsigned int *)P);
  v4 = (unsigned int)v3;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3));
  if ( *((_WORD *)P + 524) )
  {
    v21 = (void *)*((_QWORD *)P + 132);
    *((_WORD *)P + 524) = 0;
    ExFreePoolWithTag(v21, 0);
    *((_QWORD *)P + 132) = 0LL;
  }
  v5 = *((_QWORD *)P + 136);
  if ( v5 )
  {
    memset(v27, 0, 24);
    ExDeleteTimer(v5, 1, 1, (unsigned int *)v27);
  }
  v6 = (void *)*((_QWORD *)P + 135);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( *((_DWORD *)P + 79) != 1 )
    EtwpSynchronizeWithElevatedIrqlLogging();
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  v7 = (UNICODE_STRING *)*((_QWORD *)P + 138);
  if ( v7 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeAnsiString(v7 + 1);
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)P + 138) = 0LL;
  }
  EtwpFreeTraceBufferPool(P);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v8 = 0LL;
    v9 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v8 += 64LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 139) + 4136LL) + v8 - 56) + 8 * v4) = 0LL;
      --v9;
    }
    while ( v9 );
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  RtlFreeAnsiString((PUNICODE_STRING)P + 24);
  v10 = (void *)*((_QWORD *)P + 92);
  if ( v10 )
    ObfDereferenceObject(v10);
  v11 = (void *)*((_QWORD *)P + 99);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = _InterlockedExchange64((volatile __int64 *)P + 100, 0LL);
  ObDereferenceSecurityDescriptor(v12 & 0xFFFFFFFFFFFFFFF0uLL, (v12 & 0xF) + 1);
  v13 = *((_DWORD *)P + 208);
  if ( (v13 & 0x80u) != 0 )
  {
    ExFreePoolWithTag(*((PVOID *)P + 123), 0);
    ExFreePoolWithTag(*((PVOID *)P + 118), 0);
    v13 = *((_DWORD *)P + 208);
  }
  if ( (v13 & 0x2000) != 0 )
  {
    _InterlockedDecrement(&dword_14046B820);
    v13 = *((_DWORD *)P + 208);
  }
  if ( (v13 & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 124));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4224), (unsigned __int8)P[834]);
  if ( *((_QWORD *)P + 125) )
  {
    v22 = (PVOID *)*((_QWORD *)P + 125);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v23 = v22 + 3;
      v24 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v23 )
          off_140424520[0]();
        ++v23;
        --v24;
      }
      while ( v24 );
    }
    if ( *v22 )
      ExFreePoolWithTag(*v22, 0);
    ExFreePoolWithTag(v22, 0);
  }
  v14 = (_DWORD *)*((_QWORD *)P + 126);
  if ( v14 )
  {
    if ( (*((_DWORD *)P + 208) & 0x8000) != 0 )
    {
      _InterlockedDecrement(&dword_14046B840);
      v14 = (_DWORD *)*((_QWORD *)P + 126);
    }
    if ( v14 )
    {
      if ( *v14 )
      {
        ((void (__fastcall *)(_QWORD))off_1404246F8[0])((unsigned int)*v14);
        v14 = (_DWORD *)*((_QWORD *)P + 126);
      }
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)P + 126) = 0LL;
    }
  }
  v15 = (_QWORD *)*((_QWORD *)P + 127);
  if ( v15 )
  {
    if ( v15[2] )
    {
      if ( *v15 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        (*(void (__fastcall **)(_QWORD))(v15[2] + 8LL))(*v15);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)P + 127) = 0LL;
  }
  v16 = (void *)*((_QWORD *)P + 163);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = (char *)*((_QWORD *)P + 14);
  while ( v17 != P + 112 )
  {
    v19 = v17;
    v17 = *(char **)v17;
    ExFreePoolWithTag(v19, 0);
  }
  v18 = (char *)*((_QWORD *)P + 128);
  while ( v18 != P + 1024 )
  {
    v25 = v18;
    v18 = *(char **)v18;
    ExFreePoolWithTag(v25, 0);
  }
  while ( *((_QWORD *)P + 16) )
  {
    v26 = (_QWORD *)*((_QWORD *)P + 16);
    *((_QWORD *)P + 16) = *v26;
    ExFreePoolWithTag(v26, 0);
  }
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4));
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8 * v4) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4124));
}
