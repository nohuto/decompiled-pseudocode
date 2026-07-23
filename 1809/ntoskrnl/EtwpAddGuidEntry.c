/*
 * XREFs of EtwpAddGuidEntry @ 0x1405C1A0C
 * Callers:
 *     EtwpAddGuidEntry @ 0x1405C1A0C (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405C4970 (EtwpRegisterUMGuid.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     EtwpRegisterProvider @ 0x1406BF84C (EtwpRegisterProvider.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeEnterCriticalRegion @ 0x1400B9B40 (KeEnterCriticalRegion.c)
 *     EtwpFreeGuidEntry @ 0x1405C1920 (EtwpFreeGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1405C1A0C (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x1405C1C8C (EtwpAllocGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C5190 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1405C5288 (EtwpReferenceGuidEntry.c)
 */

__int64 *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rbp
  _QWORD *GuidEntryByGuid; // rsi
  __int64 v7; // rdi
  __int64 v9; // r14
  __int64 *v10; // r15
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v15; // rbp
  __int64 *i; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 *v19; // rax

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v7 = EtwpAllocGuidEntry();
  if ( !v7 )
    return 0LL;
  if ( a1 != EtwpHostSiloState )
  {
    GuidEntryByGuid = (_QWORD *)EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, (unsigned int)v3);
    if ( !GuidEntryByGuid )
    {
      GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3);
      if ( !GuidEntryByGuid )
      {
        --*(_QWORD *)(v7 + 32);
        EtwpFreeGuidEntry((char *)v7);
        return 0LL;
      }
    }
  }
  v9 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
  v10 = (__int64 *)(v9 + 16 * v3);
  if ( GuidEntryByGuid )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    v11 = GuidEntryByGuid + 2;
    GuidEntryByGuid[52] = KeGetCurrentThread();
    v12 = (_QWORD *)(v7 + 16);
    *(_QWORD *)(v7 + 400) = GuidEntryByGuid;
    v13 = GuidEntryByGuid[2];
    if ( *(_QWORD **)(v13 + 8) != GuidEntryByGuid + 2 )
      goto LABEL_33;
    *v12 = v13;
    *(_QWORD *)(v7 + 24) = v11;
    *(_QWORD *)(v13 + 8) = v12;
    *v11 = v12;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = (volatile signed __int64 *)(v9 + 48);
  ExAcquirePushLockExclusiveEx(v9 + 48, 0LL);
  for ( i = (__int64 *)*v10; ; i = (__int64 *)*i )
  {
    if ( i == v10 )
      goto LABEL_23;
    if ( *(_QWORD *)a2 == i[5] && *((_QWORD *)a2 + 1) == i[6] && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
      break;
  }
  if ( i )
  {
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15);
    KeAbPostRelease((ULONG_PTR)v15);
    KeLeaveCriticalRegion();
    if ( !GuidEntryByGuid )
      goto LABEL_30;
    v17 = *(_QWORD *)(v7 + 16);
    if ( *(_QWORD *)(v17 + 8) == v7 + 16 )
    {
      v18 = *(_QWORD **)(v7 + 24);
      if ( *v18 == v7 + 16 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)(v7 + 400) = 0LL;
        goto LABEL_27;
      }
    }
LABEL_33:
    __fastfail(3u);
  }
LABEL_23:
  v19 = (__int64 *)*v10;
  if ( *(__int64 **)(*v10 + 8) != v10 )
    goto LABEL_33;
  *(_QWORD *)v7 = v19;
  i = (__int64 *)v7;
  *(_QWORD *)(v7 + 8) = v10;
  v19[1] = v7;
  *v10 = v7;
  v7 = 0LL;
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegion();
LABEL_27:
  if ( !GuidEntryByGuid )
    goto LABEL_30;
  GuidEntryByGuid[52] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
LABEL_30:
    if ( v7 )
    {
      --*(_QWORD *)(v7 + 32);
      EtwpFreeGuidEntry((char *)v7);
    }
  }
  return i;
}
