/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x14016E474
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14016DC2C (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140004950 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     KeGetCurrentNodeNumber @ 0x140107FA0 (KeGetCurrentNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x140118A60 (KeQueryNodeActiveAffinity.c)
 *     ExAllocatePoolWithTagFromNode @ 0x14013D170 (ExAllocatePoolWithTagFromNode.c)
 *     ExpSaBinaryArrayInsert @ 0x14016E8DC (ExpSaBinaryArrayInsert.c)
 *     ExpSaBinaryArrayRemove @ 0x14016F5D4 (ExpSaBinaryArrayRemove.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

char *__fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  __int64 v3; // r15
  ULONG v5; // r12d
  __int64 v6; // r13
  char *result; // rax
  char *v8; // r14
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 AbEntrySummary; // dl
  unsigned __int8 AbOrphanedEntrySummary; // dl
  __int64 v12; // rcx
  _KPROCESS *Process; // rax
  unsigned __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  bool v17; // zf
  USHORT CurrentNodeNumber; // ax
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // r12
  USHORT v23; // r15
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  void *PoolWithTag; // rdi
  char v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // ecx
  int v31; // edx
  __int64 v32; // rcx
  char v33; // [rsp+30h] [rbp-50h]
  POOL_TYPE PoolType; // [rsp+34h] [rbp-4Ch]
  int v36; // [rsp+38h] [rbp-48h] BYREF
  ULONG MaximumProcessorCount; // [rsp+3Ch] [rbp-44h]
  unsigned int v38; // [rsp+40h] [rbp-40h]
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-38h] BYREF
  int v40; // [rsp+58h] [rbp-28h]
  int v41; // [rsp+5Ch] [rbp-24h]
  __int64 v42; // [rsp+60h] [rbp-20h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  Affinity.Mask = 0LL;
  v3 = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v33 = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v5 = MaximumProcessorCount;
  LODWORD(v6) = 0;
  PoolType = a2 != 0 ? PagedPool : NonPagedPoolNx;
  result = (char *)ExAllocatePoolWithTag(PoolType, 0x80uLL, 0x61537845u);
  v8 = result;
  if ( !result )
    return result;
  memset(result, 0, 0x80uLL);
  *((_QWORD *)v8 + 6) = 512LL;
  *((_QWORD *)v8 + 7) = v8 + 64;
  *((_QWORD *)v8 + 2) = a1;
  *((_DWORD *)v8 + 9) = 512;
  v36 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(
      0x192u,
      (ULONG_PTR)CurrentThread,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      KeGetCurrentIrql(),
      0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, &ExSaPageGroupDescriptorArrayLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  _BitScanForward((unsigned int *)&v12, AbEntrySummary);
  v40 = v12;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v12);
  v3 = (__int64)&CurrentThread->LockEntries[v12];
  if ( !v3 )
  {
LABEL_7:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_17;
  }
  if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFF800000000000uLL
    && byte_140467140[(((unsigned __int64)&ExSaPageGroupDescriptorArrayLock >> 39) & 0x1FF) - 256] == 1
    && (Process = CurrentThread->ApcState.Process, (v14 = Process[1].ActiveProcessors.Bitmap[1]) != 0)
    && (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
  {
    v15 = *(_DWORD *)(v14 + 8);
  }
  else
  {
    v15 = -1;
  }
  *(_DWORD *)(v3 + 40) = v15;
  *(_QWORD *)(v3 + 32) = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, &v36);
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v16);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &ExSaPageGroupDescriptorArrayLock,
      (_RTL_BALANCED_NODE *)v3,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v20 = ExpSaBinaryArrayInsert(ExSaPageGroupDescriptorArray, v8, CurrentNodeNumber);
  *((_DWORD *)v8 + 8) = v20;
  if ( v20 == -1 )
    goto LABEL_47;
  v21 = KeNumberProcessors_0;
  v38 = KeNumberProcessors_0;
  if ( v5 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      v42 = *(_QWORD *)(v22 + ExSaPageArrays);
      if ( (unsigned int)v6 >= v21 )
        v23 = KeGetCurrentNodeNumber();
      else
        v23 = *(_WORD *)(*(_QWORD *)(KeGetPrcb(v6) + 192) + 146LL);
      if ( a2 )
      {
        KeQueryNodeActiveAffinity(v23, &Affinity, 0LL);
        if ( v33 )
        {
          p_PreviousAffinity = 0LL;
        }
        else
        {
          v33 = 1;
          p_PreviousAffinity = &PreviousAffinity;
        }
        KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
        PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x1000uLL, 0x61537845u);
        if ( !PoolWithTag )
        {
LABEL_40:
          v26 = 0;
          goto LABEL_42;
        }
      }
      else
      {
        PoolWithTag = (void *)ExAllocatePoolWithTagFromNode(PoolType, 0x1000uLL, 0x61537845u, v23 | 0x80000000);
        if ( !PoolWithTag )
          goto LABEL_40;
      }
      if ( (unsigned int)ExpSaBinaryArrayInsert(v42, PoolWithTag, v23) == -1 )
        goto LABEL_40;
      v22 += 8LL;
      LODWORD(v6) = v6 + 1;
      if ( (unsigned int)v6 >= MaximumProcessorCount )
        break;
      v21 = v38;
    }
  }
  PoolWithTag = 0LL;
  v26 = 1;
LABEL_42:
  if ( v33 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( !v26 )
  {
LABEL_47:
    v27 = *((unsigned int *)v8 + 8);
    if ( (_DWORD)v27 != -1 )
    {
      if ( (_DWORD)v6 )
      {
        do
        {
          v6 = (unsigned int)(v6 - 1);
          v28 = *(_QWORD *)(ExSaPageArrays + 8 * v6);
          v29 = *((_DWORD *)v8 + 8);
          _BitScanReverse(&v30, v29);
          v31 = 1 << v30;
          v32 = v30 - 2;
          v41 = v32;
          ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v28 + 8 * v32) + 8LL * (v31 ^ v29) + 8), 0);
          ExpSaBinaryArrayRemove(v28, *((unsigned int *)v8 + 8));
        }
        while ( (_DWORD)v6 );
        v27 = *((unsigned int *)v8 + 8);
      }
      ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, v27);
    }
    ExFreePoolWithTag(v8, 0);
    v8 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  KeAbPostRelease((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  return v8;
}
