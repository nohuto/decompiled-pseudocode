/*
 * XREFs of PsGetProcessEnclaveModuleInfo @ 0x140309804
 * Callers:
 *     DbgkpPostModuleMessages @ 0x140848168 (DbgkpPostModuleMessages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MmGetEnclaveModuleList @ 0x1402D5320 (MmGetEnclaveModuleList.c)
 *     PsFreeEnclaveModuleInfo @ 0x1403097A8 (PsFreeEnclaveModuleInfo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsGetProcessEnclaveModuleInfo(__int64 a1, char **a2, unsigned int *a3)
{
  int EnclaveModuleList; // r12d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // r15d
  char *PoolWithTag; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r10
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *i; // r8
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *j; // rdx
  struct _KTHREAD *v19; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v21; // si
  unsigned int v22; // r8d
  bool v23; // zf
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  _KLOCK_ENTRY *v27; // rdi
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v33; // [rsp+38h] [rbp-30h]
  _QWORD *v34; // [rsp+48h] [rbp-20h]
  _QWORD *v35; // [rsp+48h] [rbp-20h]
  _QWORD *v36; // [rsp+50h] [rbp-18h]
  _QWORD *v37; // [rsp+50h] [rbp-18h]
  unsigned int v38; // [rsp+B0h] [rbp+48h]
  int v41; // [rsp+C8h] [rbp+60h] BYREF

  EnclaveModuleList = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  PoolWithTag = 0LL;
  v38 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = a1 + 1880;
  v33 = a1 + 1880;
  ExAcquirePushLockExclusiveEx(a1 + 1880, 0LL);
  v9 = *(_QWORD *)(a1 + 1864);
  if ( v9 )
  {
    v10 = *(_QWORD **)(v9 + 8);
    v11 = v10;
    v34 = v10;
    v36 = v10;
    while ( 1 )
    {
      if ( !v11 )
        goto LABEL_8;
      if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v10 = v36;
        v11 = v34;
      }
      v12 = (_QWORD *)*v11;
      if ( (*v11 & 1) != 0 )
      {
LABEL_8:
        for ( i = v10 + 1; ; ++i )
        {
          if ( (unsigned __int64)i >= *(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v9 + 4) >> 5) )
          {
            v12 = 0LL;
            goto LABEL_13;
          }
          v12 = (_QWORD *)*i;
          if ( (*i & 1) == 0 )
            break;
        }
        v11 = (_QWORD *)*i;
        v36 = i;
        v10 = i;
        v34 = (_QWORD *)*i;
      }
      else
      {
        v11 = (_QWORD *)*v11;
        v34 = v12;
      }
LABEL_13:
      if ( !v12 )
        break;
      ++v6;
    }
    if ( v6 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * v6, 0x56455350u);
      if ( PoolWithTag )
      {
        v14 = *(_QWORD *)(a1 + 1864);
        v15 = *(_QWORD **)(v14 + 8);
        v37 = v15;
        v16 = v15;
        v35 = v15;
        do
        {
          if ( !v16 )
            goto LABEL_25;
          if ( (*v16 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          {
            v15 = v37;
            v16 = v35;
          }
          v17 = (_QWORD *)*v16;
          if ( (*v16 & 1) != 0 )
          {
LABEL_25:
            for ( j = v15 + 1; ; ++j )
            {
              if ( (unsigned __int64)j >= *(_QWORD *)(v14 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v14 + 4) >> 5) )
              {
                v17 = 0LL;
                goto LABEL_30;
              }
              if ( (*j & 1) == 0 )
                break;
            }
            v16 = (_QWORD *)*j;
            v37 = j;
            v15 = j;
            v35 = (_QWORD *)*j;
            v17 = (_QWORD *)*j;
          }
          else
          {
            v16 = (_QWORD *)*v16;
            v35 = v17;
          }
LABEL_30:
          if ( !v17 )
            break;
          EnclaveModuleList = MmGetEnclaveModuleList(
                                v17[4],
                                &PoolWithTag[16 * v38],
                                (unsigned int *)&PoolWithTag[16 * v38 + 8]);
          if ( EnclaveModuleList < 0 )
            break;
          ++v38;
        }
        while ( v38 < v6 );
        v8 = v33;
      }
      else
      {
        EnclaveModuleList = -1073741801;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  v19 = KeGetCurrentThread();
  v41 = 0;
  if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v19->ApcState.Process);
  else
    SessionId = -1;
  --v19->SpecialApcDisable;
  v21 = ++v19->AbAllocationRegionCount;
  v22 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  v23 = !_BitScanReverse((unsigned int *)&v24, v22);
  if ( v23 )
    goto LABEL_47;
  while ( 1 )
  {
    v25 = 1 << v24;
    v26 = v24;
    v27 = &v19->LockEntries[v26];
    v22 &= ~v25;
    if ( (v27->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v27->LockState.0 & 1) == 0
      && (*(_QWORD *)&v27->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
      && v27->LockState.SessionId == SessionId )
    {
      v27->AcquiredByte &= ~1u;
      if ( v27->LockState.0 )
        break;
    }
    v23 = !_BitScanReverse((unsigned int *)&v24, v22);
    if ( v23 )
      goto LABEL_47;
  }
  if ( !v27 )
  {
LABEL_47:
    if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v19, v8, SessionId, 0LL);
  }
  else
  {
    v27->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v27->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v19->LockEntries[v26].TreeNode);
    v28 = v27->BoostBitmap.AllFields & 0x1FFFF;
    v29 = v27->BoostBitmap.AllFields & 0xFFFE0000;
    v27->ThreadLocalFlags &= ~1u;
    v41 = v28;
    v27->BoostBitmap.AllFields = v29;
    v27->LockState.0 = 0LL;
    v30 = ((char *)v27 - (char *)v19 - 800) / 96;
    if ( v21 == 1 )
      v19->AbEntrySummary |= 1 << v30;
    else
      _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v30);
  }
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v19, v8, &v41);
  v23 = v19->SpecialApcDisable++ == -1;
  if ( v23 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(v31);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( EnclaveModuleList < 0 )
  {
    PsFreeEnclaveModuleInfo(PoolWithTag, v38);
  }
  else
  {
    *a2 = PoolWithTag;
    *a3 = v6;
  }
  return (unsigned int)EnclaveModuleList;
}
