/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x14012C530
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1400FE940 (KeGetCurrentProcessorNumberEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x1402FD478 (RtlpHpLfhBucketAllocateSlot.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  char CurrentProcessorNumber; // al
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int SessionId; // r12d
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v10; // r14
  unsigned __int8 v11; // di
  __int64 result; // rax
  unsigned __int64 v13; // rsi
  KIRQL v14; // al
  unsigned __int8 *v15; // rcx
  KIRQL v16; // bl
  unsigned __int8 *v17; // r10
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rax
  struct _KTHREAD *v21; // rbx
  unsigned __int8 v22; // r15
  __int64 v23; // rdx
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  unsigned int v30; // ecx
  unsigned __int8 *v31; // r8
  unsigned __int8 v32; // r9
  unsigned int v33; // r11d
  unsigned int v34; // r14d
  unsigned __int8 v35; // al
  __int64 v36; // rax
  struct _KTHREAD *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  _KLOCK_ENTRY *v42; // r15
  unsigned __int8 v43; // al
  __int64 v44; // rcx
  struct _KPRCB *v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v49[8]; // [rsp+0h] [rbp-89h] BYREF
  unsigned __int8 v50; // [rsp+30h] [rbp-59h]
  int v51; // [rsp+34h] [rbp-55h] BYREF
  int v52; // [rsp+38h] [rbp-51h] BYREF
  __int64 v53; // [rsp+40h] [rbp-49h]
  int v54; // [rsp+48h] [rbp-41h]
  int v55; // [rsp+4Ch] [rbp-3Dh]
  __int64 v56; // [rsp+50h] [rbp-39h]
  _BYTE v57[64]; // [rsp+60h] [rbp-29h] BYREF

  v2 = a1;
  v53 = a1;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v5 = *(unsigned __int8 *)(v2 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  SessionId = -1;
  if ( (_DWORD)v6 == v5 )
    goto LABEL_4;
  if ( (unsigned int)v6 < v5 )
    goto LABEL_5;
  if ( (_BYTE)v5 == 1 )
LABEL_4:
    v6 = 0LL;
  else
    v6 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 48) + -1 - v5 + (unsigned int)v6);
LABEL_5:
  v8 = *(_QWORD *)(a2 + 88);
  CurrentThread = KeGetCurrentThread();
  v10 = (unsigned int)v6;
  v56 = (unsigned int)v6;
  v11 = *(_BYTE *)(v6 + v8);
  result = BYTE5(CurrentThread[1].Ucb);
  if ( (_DWORD)result != (_DWORD)v6 )
  {
    BYTE5(CurrentThread[1].Ucb) = v6;
    return result;
  }
  memset(v57, 0, sizeof(v57));
  v13 = a2 + 80;
  v14 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 80), *(unsigned __int8 *)(v2 + 57));
  v15 = *(unsigned __int8 **)(a2 + 88);
  v16 = v14;
  v17 = &v15[v10];
  if ( v11 != v15[v10] )
    goto LABEL_11;
  v18 = *(unsigned __int8 *)(v2 + 56);
  if ( (_BYTE)v18 )
  {
    v19 = *(unsigned __int8 *)(v2 + 56);
    do
    {
      v20 = *v15++;
      ++v57[v20];
      --v19;
    }
    while ( v19 );
  }
  if ( v57[v11] == 1 )
    goto LABEL_11;
  v29 = (unsigned int)v11 + 1;
  v30 = v29;
  if ( (unsigned int)v29 < v18 )
  {
    v31 = &v57[(unsigned int)v29];
    do
    {
      v32 = *v31;
      v33 = v30;
      v34 = v29;
      if ( !*v31 )
        break;
      v36 = (unsigned int)v29;
      ++v30;
      ++v31;
      v29 = v33;
      if ( v32 >= v57[v36] )
        v29 = v34;
    }
    while ( v30 < v18 );
    v13 = a2 + 80;
  }
  if ( v57[v29] )
  {
    *v17 = v29;
LABEL_11:
    if ( *(_BYTE *)(v2 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v13);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = v16;
      __writecr8(v16);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      v52 = 0;
      v21 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v21->ApcState.Process);
      --v21->SpecialApcDisable;
      v22 = ++v21->AbAllocationRegionCount;
      LODWORD(v23) = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v24 = !_BitScanReverse((unsigned int *)&v25, v23);
        v55 = v25;
        if ( v24 )
          break;
        v26 = (__int64)&v21->LockEntries[v25];
        v23 = ~(1 << v25) & (unsigned int)v23;
        if ( (*(_BYTE *)(v26 + 26) & 1) != 0
          && (*(_DWORD *)(v26 + 32) & 1) == 0
          && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v26 + 40) == SessionId )
        {
          *(_BYTE *)(v26 + 26) &= ~1u;
          if ( *(_QWORD *)(v26 + 32) )
          {
            if ( v26 )
            {
              *(_BYTE *)(v26 + 32) |= 2u;
              if ( *(__int64 *)(v26 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26, v23);
              v52 = 0;
              v52 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
              *(_DWORD *)(v26 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v26 + 25) &= ~1u;
              *(_QWORD *)(v26 + 32) = 0LL;
              v27 = (v26 - (__int64)v21 - 800) / 96;
              if ( v22 == 1 )
                v21->AbEntrySummary |= 1 << v27;
              else
                _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v27);
              goto LABEL_31;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v21, v13, SessionId, 0LL);
LABEL_31:
      --v21->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v21, v13, (__int64)&v52);
      v24 = v21->SpecialApcDisable++ == -1;
      if ( v24 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
        KiCheckForKernelApcDelivery(v28);
      return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return result;
  }
  v35 = *(_BYTE *)(a2 + 77);
  if ( v35 < 0x1Eu )
  {
    *(_BYTE *)(a2 + 77) = v35 + 1;
    goto LABEL_11;
  }
  if ( *(_BYTE *)(v2 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v13);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      v45 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v45);
    }
    __writecr8(v16);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    v51 = 0;
    v37 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v37->ApcState.Process);
    --v37->SpecialApcDisable;
    v50 = ++v37->AbAllocationRegionCount;
    LODWORD(v38) = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v24 = !_BitScanReverse((unsigned int *)&v39, v38);
      v54 = v39;
      if ( v24 )
        goto LABEL_59;
      v40 = 1 << v39;
      v41 = v39;
      v42 = &v37->LockEntries[v41];
      v38 = ~v40 & (unsigned int)v38;
      if ( (v42->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v42->LockState.0 & 1) == 0
        && (*(_QWORD *)&v42->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
        && v42->LockState.SessionId == SessionId )
      {
        v42->AcquiredByte &= ~1u;
        if ( v42->LockState.0 )
          break;
      }
    }
    if ( !v42 )
    {
LABEL_59:
      if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v37, v13, SessionId, 0LL);
      goto LABEL_71;
    }
    v42->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v42->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v37->LockEntries[v41].TreeNode, v38);
    v51 = 0;
    v51 = v42->BoostBitmap.AllFields & 0x1FFFF;
    v42->BoostBitmap.AllFields &= 0xFFFE0000;
    v42->ThreadLocalFlags &= ~1u;
    v42->LockState.0 = 0LL;
    v43 = 1 << (((char *)v42 - (char *)v37 - 800) / 96);
    if ( v50 == 1 )
      v37->AbEntrySummary |= v43;
    else
      _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, v43);
LABEL_71:
    --v37->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v37, v13, (__int64)&v51);
    v24 = v37->SpecialApcDisable++ == -1;
    if ( v24 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
      KiCheckForKernelApcDelivery(v44);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v2 = v53;
  }
  v53 = 0LL;
  v46 = *(_QWORD *)(a2 + 96);
  LOWORD(v53) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 8 * v29), 2LL, 0LL);
  if ( !result )
  {
    result = RtlpHpLfhBucketAllocateSlot(v2, a2, (unsigned int)v29);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v29) = result;
    if ( result )
    {
      _InterlockedOr(v49, 0);
      v47 = v56;
      *(_BYTE *)(a2 + 2) = v29 + 1;
      result = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v47 + result) = v29;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
