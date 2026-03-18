/*
 * XREFs of EtwpAddGuidEntry @ 0x1406669DC
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1405C46E0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405D3990 (EtwpRegisterUMGuid.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x1406669DC (EtwpAddGuidEntry.c)
 *     EtwpRegisterProvider @ 0x1407185AC (EtwpRegisterProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeEnterCriticalRegion @ 0x140043920 (KeEnterCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4180 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1405D4274 (EtwpReferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1406669DC (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x140666C54 (EtwpAllocGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x1406E02A8 (EtwpFreeGuidEntry.c)
 */

_QWORD *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rsi
  __int64 *GuidEntryByGuid; // rbp
  _QWORD *v7; // rdi
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // r12
  volatile signed __int64 *v12; // r14
  _QWORD *i; // rsi
  _QWORD *v14; // rax
  __int64 **v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // r8

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v7 = (_QWORD *)EtwpAllocGuidEntry();
  if ( !v7 )
    return 0LL;
  if ( a1 != EtwpHostSiloState )
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, v3);
    if ( !GuidEntryByGuid )
    {
      GuidEntryByGuid = (__int64 *)EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3);
      if ( !GuidEntryByGuid )
      {
        --v7[4];
        EtwpFreeGuidEntry(v7);
        return 0LL;
      }
    }
  }
  v9 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
  CurrentThread = KeGetCurrentThread();
  v11 = (_QWORD *)(v9 + 16 * v3);
  --CurrentThread->KernelApcDisable;
  v12 = (volatile signed __int64 *)(v9 + 48);
  ExAcquirePushLockExclusiveEx(v9 + 48, 0LL);
  for ( i = (_QWORD *)*v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
      goto LABEL_17;
    if ( *(_QWORD *)a2 == i[5] && *((_QWORD *)a2 + 1) == i[6] && EtwpReferenceGuidEntry((ULONG_PTR)i) )
      break;
  }
  if ( i )
  {
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    --v7[4];
    EtwpFreeGuidEntry(v7);
    v7 = 0LL;
  }
  else
  {
LABEL_17:
    v14 = (_QWORD *)*v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_27;
    *v7 = v14;
    i = v7;
    v7[1] = v11;
    v14[1] = v7;
    *v11 = v7;
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
  }
  if ( GuidEntryByGuid )
  {
    if ( !v7 )
    {
      EtwpUnreferenceGuidEntry(GuidEntryByGuid);
      return i;
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    GuidEntryByGuid[52] = (__int64)KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 51), 0LL);
    v15 = (__int64 **)(GuidEntryByGuid + 2);
    i[52] = KeGetCurrentThread();
    v16 = i + 2;
    i[50] = GuidEntryByGuid;
    v17 = GuidEntryByGuid[2];
    if ( *(__int64 **)(v17 + 8) == GuidEntryByGuid + 2 )
    {
      i[3] = v15;
      *v16 = v17;
      *(_QWORD *)(v17 + 8) = v16;
      *v15 = v16;
      i[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(i + 51), 0LL);
      KeLeaveCriticalRegion();
      GuidEntryByGuid[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      KeLeaveCriticalRegion();
      return i;
    }
LABEL_27:
    __fastfail(3u);
  }
  return i;
}
