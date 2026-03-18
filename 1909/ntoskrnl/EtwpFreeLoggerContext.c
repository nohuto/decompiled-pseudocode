/*
 * XREFs of EtwpFreeLoggerContext @ 0x1406AC3AC
 * Callers:
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F2760 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400FD320 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x1400FD3E0 (ExReInitializeRundownProtectionCacheAware.c)
 *     EtwpFreeCompression @ 0x1400FD480 (EtwpFreeCompression.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x1400FD4E4 (EtwpCancelPendingStackwalkApcs.c)
 *     KeRemoveQueueDpc @ 0x1400FD530 (KeRemoveQueueDpc.c)
 *     ExDeleteTimer @ 0x140113360 (ExDeleteTimer.c)
 *     EtwpReleaseStackLookasideList @ 0x14032CC0C (EtwpReleaseStackLookasideList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     EtwpFreeLoggerSecurityDescriptor @ 0x1406AC978 (EtwpFreeLoggerSecurityDescriptor.c)
 *     EtwpFreeTraceBufferPool @ 0x1406AC9A4 (EtwpFreeTraceBufferPool.c)
 *     EtwpFreeSoftRestartContext @ 0x1406ACAC4 (EtwpFreeSoftRestartContext.c)
 *     EtwpFreeDisallowedGuids @ 0x1406ACAF4 (EtwpFreeDisallowedGuids.c)
 *     EtwpShutdownConsumers @ 0x1406ACB20 (EtwpShutdownConsumers.c)
 *     EtwpFreeSystemLoggerIndex @ 0x140720D14 (EtwpFreeSystemLoggerIndex.c)
 *     EtwpFreePmcData @ 0x1408F79A0 (EtwpFreePmcData.c)
 *     EtwpSynchronizeWithElevatedIrqlLogging @ 0x1408FAAB4 (EtwpSynchronizeWithElevatedIrqlLogging.c)
 *     EtwpFreeStackCache @ 0x14090043C (EtwpFreeStackCache.c)
 *     EtwpFreeLbrData @ 0x14090684C (EtwpFreeLbrData.c)
 *     EtwpDestructIptData @ 0x140906B30 (EtwpDestructIptData.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rcx
  ULONG_PTR v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rcx
  void *v10; // rcx
  int v11; // eax
  void *v12; // rcx
  char *v13; // rbx
  char *v14; // rcx
  char *v15; // rbx
  char *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)P + 135);
  EtwpShutdownConsumers();
  v3 = *(unsigned int *)P;
  EtwpCancelPendingStackwalkApcs((unsigned int *)P);
  v4 = (unsigned int)v3;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3));
  EtwpFreeDisallowedGuids(P + 1048);
  v5 = *((_QWORD *)P + 133);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
    {
      memset(v18, 0, 24);
      ExDeleteTimer(v6, 1, 1, (unsigned int *)v18);
      v5 = *((_QWORD *)P + 133);
    }
    if ( *(_QWORD *)(v5 + 24) )
    {
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
      v5 = *((_QWORD *)P + 133);
    }
    ExFreePoolWithTag((PVOID)v5, 0);
    *((_QWORD *)P + 133) = 0LL;
  }
  if ( *((_DWORD *)P + 79) != 1 )
    EtwpSynchronizeWithElevatedIrqlLogging();
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  EtwpFreeSoftRestartContext(P);
  EtwpFreeTraceBufferPool(P);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v7 = 0LL;
    v8 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v7 += 64LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 135) + 4136LL) + v7 - 56) + 8 * v3) = 0LL;
      --v8;
    }
    while ( v8 );
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  RtlFreeAnsiString((PUNICODE_STRING)P + 24);
  v9 = (void *)*((_QWORD *)P + 92);
  if ( v9 )
    ObfDereferenceObject(v9);
  v10 = (void *)*((_QWORD *)P + 99);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  EtwpFreeLoggerSecurityDescriptor(P);
  v11 = *((_DWORD *)P + 208);
  if ( (v11 & 0x80u) != 0 )
  {
    ExFreePoolWithTag(*((PVOID *)P + 123), 0);
    ExFreePoolWithTag(*((PVOID *)P + 118), 0);
    v11 = *((_DWORD *)P + 208);
  }
  if ( (v11 & 0x2000) != 0 )
  {
    EtwpReleaseStackLookasideList();
    v11 = *((_DWORD *)P + 208);
  }
  if ( (v11 & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 124));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    EtwpFreeSystemLoggerIndex(v1, (unsigned __int8)P[834]);
  if ( *((_QWORD *)P + 125) )
    EtwpFreePmcData(P);
  if ( *((_QWORD *)P + 126) )
    EtwpFreeLbrData(P);
  if ( *((_QWORD *)P + 127) )
    EtwpDestructIptData(P);
  v12 = (void *)*((_QWORD *)P + 159);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = (char *)*((_QWORD *)P + 14);
  while ( v13 != P + 112 )
  {
    v14 = v13;
    v13 = *(char **)v13;
    ExFreePoolWithTag(v14, 0);
  }
  v15 = (char *)*((_QWORD *)P + 128);
  while ( v15 != P + 1024 )
  {
    v16 = v15;
    v15 = *(char **)v15;
    ExFreePoolWithTag(v16, 0);
  }
  while ( *((_QWORD *)P + 16) )
  {
    v17 = (_QWORD *)*((_QWORD *)P + 16);
    *((_QWORD *)P + 16) = *v17;
    ExFreePoolWithTag(v17, 0);
  }
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4));
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8 * v4) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4124));
}
