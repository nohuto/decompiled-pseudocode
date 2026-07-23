/*
 * XREFs of EtwInitializeSiloState @ 0x14076FE4C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C50A0 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140004950 (KeQueryMaximumProcessorCountEx.c)
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeEnterCriticalRegion @ 0x140043D20 (KeEnterCriticalRegion.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1400D6100 (ExFreeCacheAwareRundownProtection.c)
 *     KeInitializeMutex @ 0x1400FD030 (KeInitializeMutex.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140190480 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x140190750 (EtwpReadPerSiloConfigParameters.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExSubscribeWnfStateChange @ 0x140652D70 (ExSubscribeWnfStateChange.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1406AC7D0 (ExAllocateCacheAwareRundownProtection.c)
 *     EtwpInitializeHashBucket @ 0x140770264 (EtwpInitializeHashBucket.c)
 *     EtwpInitializeAutoLoggers @ 0x140770288 (EtwpInitializeAutoLoggers.c)
 */

__int64 __fastcall EtwInitializeSiloState(struct _LIST_ENTRY *a1)
{
  char *PoolWithTag; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  ULONG MaximumProcessorCount; // ebx
  unsigned int v6; // ebp
  PVOID v7; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int16 *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned int v18; // ebx
  char *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rcx
  bool IsHostSilo; // bl
  struct _LIST_ENTRY *v23; // rbp
  __int64 v24; // r8
  unsigned int i; // r9d
  __int16 v26; // ax
  __int64 v27; // rbx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x1220uLL, 0x61777445u);
  v3 = 0;
  v4 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag + 8, 0, 0x1218uLL);
  *(_QWORD *)v4 = a1;
  *(_QWORD *)(v4 + 8) = PsGetServerSiloGlobals((__int64)a1);
  EtwpReadPerSiloConfigParameters(v4);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v6 = MaximumProcessorCount * (24 * *(_DWORD *)(v4 + 16) + 64);
  v7 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v6, 0x61777445u);
  *(_QWORD *)(v4 + 4136) = v7;
  if ( !v7 )
    goto LABEL_26;
  memset(v7, 0, v6);
  v8 = MaximumProcessorCount;
  v9 = *(_QWORD *)(v4 + 4136) + ((unsigned __int64)MaximumProcessorCount << 6);
  if ( MaximumProcessorCount )
  {
    v10 = 0LL;
    do
    {
      *(_QWORD *)(v10 + *(_QWORD *)(v4 + 4136)) = v9;
      v10 += 64LL;
      v11 = v9 + 8LL * *(unsigned int *)(v4 + 16);
      *(_QWORD *)(v10 + *(_QWORD *)(v4 + 4136) - 56) = v11;
      v12 = *(unsigned int *)(v4 + 16);
      *(_QWORD *)(v10 + *(_QWORD *)(v4 + 4136) - 48) = v11 + 8 * v12;
      v9 = v11 + 8 * (v12 + *(unsigned int *)(v4 + 16));
      --v8;
    }
    while ( v8 );
  }
  v13 = (__int16 *)(v4 + 4048);
  *(_WORD *)(v4 + 4048) = 3;
  v14 = v4 + 464;
  do
  {
    EtwpInitializeHashBucket(v14);
    v14 = v15 + 56;
  }
  while ( v16 != 1 );
  v17 = (unsigned int)(8 * *(_DWORD *)(v4 + 16));
  v18 = 16 * *(_DWORD *)(v4 + 16);
  v19 = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v18, 0x61777445u);
  *(_QWORD *)(v4 + 448) = v19;
  if ( !v19 )
  {
LABEL_26:
    v28 = *(void **)(v4 + 4136);
    if ( v28 )
      ExFreePoolWithTag(v28, 0x61777445u);
    v29 = *(void **)(v4 + 448);
    if ( v29 )
      ExFreePoolWithTag(v29, 0x61777445u);
    v30 = *(void **)(v4 + 4192);
    if ( v30 )
      ExFreePoolWithTag(v30, 0x61777445u);
    ExFreePoolWithTag((PVOID)v4, 0x61777445u);
    return (unsigned int)-1073741801;
  }
  *(_QWORD *)(v4 + 456) = &v19[v17];
  memset(v19, 0, v18);
  v20 = 0LL;
  if ( *(_DWORD *)(v4 + 16) )
  {
    while ( 1 )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 456) + 8 * v20) = 1LL;
      *(_QWORD *)(*(_QWORD *)(v4 + 448) + 8 * v20) = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
      if ( !*(_QWORD *)(*(_QWORD *)(v4 + 448) + 8 * v20) )
        break;
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= *(_DWORD *)(v4 + 16) )
        goto LABEL_12;
    }
    if ( (_DWORD)v20 )
    {
      v27 = 0LL;
      do
      {
        ExFreeCacheAwareRundownProtection(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v27 + *(_QWORD *)(v4 + 448)));
        v27 += 8LL;
        --v20;
      }
      while ( v20 );
    }
    goto LABEL_26;
  }
LABEL_12:
  *(_QWORD *)(v4 + 416) = v4;
  *(_QWORD *)(v4 + 432) = 0LL;
  *(GUID *)(v4 + 64) = SecurityProviderGuid;
  KeInitializeMutex((PRKMUTEX)(v4 + 4584), 0);
  *((_QWORD *)PsGetServerSiloGlobals((__int64)a1) + 108) = v4;
  IsHostSilo = PsIsHostSilo(v21);
  if ( IsHostSilo )
  {
    qword_140429E18 = *(_QWORD *)(v4 + 456);
    EtwpHostSiloState = v4;
    qword_140429E20 = v4;
    ExSubscribeWnfStateChange(
      v4 + 4144,
      (int)&WNF_CONT_RESTORE_FROM_SNAPSHOT_COMPLETE,
      1,
      0,
      (__int64)EtwpContainerResumeWnfCallback,
      0LL);
  }
  v23 = PsAttachSiloToCurrentThread(a1);
  EtwpQueryPartitionRegistryInformation(
    (GUID *)(v4 + 4152),
    (PVOID *)(v4 + 4192),
    (_WORD *)(v4 + 4200),
    (_DWORD *)(v4 + 4204),
    (_QWORD *)(v4 + 4184),
    (GUID *)(v4 + 4168));
  if ( IsHostSilo )
    qword_140A4F6D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwpInitializeAutoLoggers();
  if ( IsHostSilo )
    qword_140A4F6E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PsDetachSiloFromCurrentThread(v23);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 432, 0LL);
  v24 = v4 + 156;
  *(_QWORD *)(v4 + 440) = KeGetCurrentThread();
  for ( i = 0; i < 8; ++i )
  {
    v26 = *v13;
    if ( *v13 )
    {
      *(_QWORD *)(v24 + 12) = -1LL;
      *(_WORD *)(v24 + 2) = v26;
      *(_DWORD *)(v24 - 4) = 1;
      *(_BYTE *)v24 = -1;
      *(_QWORD *)(v24 + 20) = 0LL;
      *(_DWORD *)(v24 + 4) = 64;
      *(_BYTE *)(v4 + 4064) |= 1 << i;
    }
    ++v13;
    v24 += 32LL;
  }
  *(_QWORD *)(v4 + 440) = 0LL;
  ExReleasePushLockEx(v4 + 432, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v4 + 4096) = 0LL;
  *(_QWORD *)(v4 + 4080) = 0LL;
  *(_QWORD *)(v4 + 4088) = 0LL;
  return v3;
}
