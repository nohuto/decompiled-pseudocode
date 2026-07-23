/*
 * XREFs of EtwpFreeLoggerContext @ 0x1406C1B40
 * Callers:
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 * Callees:
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14000E780 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x14000E830 (ExReInitializeRundownProtectionCacheAware.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExDeleteTimer @ 0x1400F9910 (ExDeleteTimer.c)
 *     ExReleaseExtensionTable @ 0x14010DC6C (ExReleaseExtensionTable.c)
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     EtwpFreeCompression @ 0x140132A08 (EtwpFreeCompression.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140132A60 (EtwpCancelPendingStackwalkApcs.c)
 *     KeRemoveQueueDpc @ 0x140132AB0 (KeRemoveQueueDpc.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405CA410 (ObDereferenceSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     EtwpFreeTraceBufferPool @ 0x1406C1FC4 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406C2164 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpFreeStackCache @ 0x1408C4B80 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x1408CB0CC (EtwpCancelMemoryPreservation.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  PRKEVENT *v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r15
  void *v8; // rcx
  __int64 v9; // rcx
  ULONG_PTR v10; // rax
  UNICODE_STRING *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rsi
  _DWORD *v21; // rcx
  _QWORD *v22; // rbx
  void *v23; // rcx
  char *v24; // rbx
  char *v25; // rcx
  char *v26; // rbx
  char *v27; // rcx
  _QWORD *v28; // rcx
  _QWORD v29[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)P + 135);
  EtwpRealtimeDisconnectAllConsumers(P);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 704), 0LL);
  *((_DWORD *)P + 208) |= 0x200u;
  if ( (*((_DWORD *)P + 209) & 0x20) != 0 )
  {
    v3 = (PRKEVENT *)*((_QWORD *)P + 46);
    *((_QWORD *)P + 46) = 0LL;
    *((_DWORD *)P + 14) = 0;
    _InterlockedAnd((volatile signed __int32 *)P + 209, 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(P + 472), 0, 0);
    KeSetEvent(v3[6], 0, 0);
    ObfDereferenceObject(v3);
  }
  ExReleasePushLockEx((ULONG_PTR)(P + 704), 0LL);
  v4 = *(unsigned int *)P;
  EtwpCancelPendingStackwalkApcs((unsigned int *)P, v5, v6);
  v7 = (unsigned int)v4;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4));
  if ( *((_WORD *)P + 524) )
  {
    v8 = (void *)*((_QWORD *)P + 132);
    *((_WORD *)P + 524) = 0;
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)P + 132) = 0LL;
  }
  v9 = *((_QWORD *)P + 133);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
    {
      memset(v29, 0, 24);
      ExDeleteTimer(v10, 1, 1, (unsigned int *)v29);
      v9 = *((_QWORD *)P + 133);
    }
    if ( *(_QWORD *)(v9 + 24) )
    {
      ExFreePoolWithTag(*(PVOID *)(v9 + 24), 0);
      v9 = *((_QWORD *)P + 133);
    }
    ExFreePoolWithTag((PVOID)v9, 0);
    *((_QWORD *)P + 133) = 0LL;
  }
  if ( *((_DWORD *)P + 79) != 1 )
    KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)EtwpSynchronizationDpc, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  v11 = (UNICODE_STRING *)*((_QWORD *)P + 134);
  if ( v11 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeAnsiString(v11 + 1);
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)P + 134) = 0LL;
  }
  EtwpFreeTraceBufferPool(P);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v12 = 0LL;
    v13 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v12 += 64LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 135) + 4136LL) + v12 - 56) + 8 * v7) = 0LL;
      --v13;
    }
    while ( v13 );
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  RtlFreeAnsiString((PUNICODE_STRING)P + 24);
  v14 = (void *)*((_QWORD *)P + 92);
  if ( v14 )
    ObfDereferenceObject(v14);
  v15 = (void *)*((_QWORD *)P + 99);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = _InterlockedExchange64((volatile __int64 *)P + 100, 0LL);
  ObDereferenceSecurityDescriptor(v16 & 0xFFFFFFFFFFFFFFF0uLL, (v16 & 0xF) + 1);
  v17 = *((_DWORD *)P + 208);
  if ( (v17 & 0x80u) != 0 )
  {
    ExFreePoolWithTag(*((PVOID *)P + 123), 0);
    ExFreePoolWithTag(*((PVOID *)P + 118), 0);
    v17 = *((_DWORD *)P + 208);
  }
  if ( (v17 & 0x2000) != 0 )
  {
    _InterlockedDecrement(&dword_140440AA0);
    v17 = *((_DWORD *)P + 208);
  }
  if ( (v17 & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 124));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4224), (unsigned __int8)P[834]);
  if ( *((_QWORD *)P + 125) )
  {
    v18 = (_QWORD *)*((_QWORD *)P + 125);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v19 = v18 + 6;
      v20 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v19 )
          off_1403FF520[0]();
        ++v19;
        --v20;
      }
      while ( v20 );
    }
    ExFreePoolWithTag(v18, 0);
  }
  v21 = (_DWORD *)*((_QWORD *)P + 126);
  if ( v21 )
  {
    if ( (*((_DWORD *)P + 208) & 0x8000) != 0 )
    {
      _InterlockedDecrement(&dword_140440AC0);
      v21 = (_DWORD *)*((_QWORD *)P + 126);
    }
    if ( v21 )
    {
      if ( *v21 )
      {
        ((void (__fastcall *)(_QWORD))off_1403FF6F8[0])((unsigned int)*v21);
        v21 = (_DWORD *)*((_QWORD *)P + 126);
      }
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)P + 126) = 0LL;
    }
  }
  v22 = (_QWORD *)*((_QWORD *)P + 127);
  if ( v22 )
  {
    if ( v22[2] )
    {
      if ( *v22 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        (*(void (__fastcall **)(_QWORD))(v22[2] + 8LL))(*v22);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v22, 0);
    *((_QWORD *)P + 127) = 0LL;
  }
  v23 = (void *)*((_QWORD *)P + 159);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  v24 = (char *)*((_QWORD *)P + 14);
  while ( v24 != P + 112 )
  {
    v25 = v24;
    v24 = *(char **)v24;
    ExFreePoolWithTag(v25, 0);
  }
  v26 = (char *)*((_QWORD *)P + 128);
  while ( v26 != P + 1024 )
  {
    v27 = v26;
    v26 = *(char **)v26;
    ExFreePoolWithTag(v27, 0);
  }
  while ( *((_QWORD *)P + 16) )
  {
    v28 = (_QWORD *)*((_QWORD *)P + 16);
    *((_QWORD *)P + 16) = *v28;
    ExFreePoolWithTag(v28, 0);
  }
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v7));
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8 * v7) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4124));
}
