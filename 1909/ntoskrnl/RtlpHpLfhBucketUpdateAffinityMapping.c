/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x1401116D4
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140038E80 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F7B0 (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1400E1240 (KeGetCurrentProcessorNumberEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x140111644 (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r15
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
  __int64 v21; // rdi
  unsigned int v22; // ecx
  unsigned __int8 *v23; // r8
  unsigned __int8 v24; // r9
  unsigned int v25; // r11d
  unsigned int v26; // r14d
  unsigned __int8 v27; // al
  struct _KTHREAD *v28; // rbx
  unsigned __int8 v29; // r15
  unsigned int v30; // edx
  bool v31; // zf
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  struct _KTHREAD *v39; // rbx
  unsigned int v40; // edx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  _KLOCK_ENTRY *v44; // r15
  unsigned __int8 v45; // al
  __int64 v46; // rcx
  struct _KPRCB *v47; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v49[8]; // [rsp+0h] [rbp-89h] BYREF
  unsigned __int8 v50; // [rsp+30h] [rbp-59h]
  int v51; // [rsp+34h] [rbp-55h] BYREF
  int v52; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp-49h]
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
  if ( (unsigned int)v6 >= v5 )
  {
    if ( (_DWORD)v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0LL;
    else
      v6 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 48) + -1 - v5 + (unsigned int)v6);
  }
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
    goto LABEL_17;
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
    goto LABEL_17;
  v21 = (unsigned int)v11 + 1;
  v22 = v21;
  if ( (unsigned int)v21 < v18 )
  {
    v23 = &v57[(unsigned int)v21];
    do
    {
      v24 = *v23;
      v25 = v22;
      v26 = v21;
      if ( !*v23 )
        break;
      v36 = (unsigned int)v21;
      ++v22;
      ++v23;
      v21 = v25;
      if ( v24 >= v57[v36] )
        v21 = v26;
    }
    while ( v22 < v18 );
    v13 = a2 + 80;
  }
  if ( v57[v21] )
  {
    *v17 = v21;
LABEL_17:
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
      v28 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v28->ApcState.Process);
      --v28->SpecialApcDisable;
      v29 = ++v28->AbAllocationRegionCount;
      v30 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v31 = !_BitScanReverse((unsigned int *)&v32, v30);
        v55 = v32;
        if ( v31 )
          break;
        v33 = (__int64)&v28->LockEntries[v32];
        v30 &= ~(1 << v32);
        if ( (*(_BYTE *)(v33 + 26) & 1) != 0
          && (*(_DWORD *)(v33 + 32) & 1) == 0
          && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v33 + 40) == SessionId )
        {
          *(_BYTE *)(v33 + 26) &= ~1u;
          if ( *(_QWORD *)(v33 + 32) )
          {
            if ( v33 )
            {
              *(_BYTE *)(v33 + 32) |= 2u;
              if ( *(__int64 *)(v33 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33);
              v52 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
              *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v33 + 25) &= ~1u;
              *(_QWORD *)(v33 + 32) = 0LL;
              v34 = (v33 - (__int64)v28 - 800) / 96;
              if ( v29 == 1 )
                v28->AbEntrySummary |= 1 << v34;
              else
                _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v34);
              goto LABEL_34;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, v13, SessionId, 0LL);
LABEL_34:
      --v28->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v28, v13, &v52);
      v31 = v28->SpecialApcDisable++ == -1;
      if ( v31 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
        KiCheckForKernelApcDelivery(v35);
      return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return result;
  }
  v27 = *(_BYTE *)(a2 + 77);
  if ( v27 < 0x1Eu )
  {
    *(_BYTE *)(a2 + 77) = v27 + 1;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v2 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v13);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      v47 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v47);
    }
    __writecr8(v16);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    v51 = 0;
    v39 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v39->ApcState.Process);
    --v39->SpecialApcDisable;
    v50 = ++v39->AbAllocationRegionCount;
    v40 = ((char)v39->AbEntrySummary | (char)v39->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v31 = !_BitScanReverse((unsigned int *)&v41, v40);
      v54 = v41;
      if ( v31 )
        break;
      v42 = 1 << v41;
      v43 = v41;
      v44 = &v39->LockEntries[v43];
      v40 &= ~v42;
      if ( (v44->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v44->LockState.0 & 1) == 0
        && (*(_QWORD *)&v44->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
        && v44->LockState.SessionId == SessionId )
      {
        v44->AcquiredByte &= ~1u;
        if ( v44->LockState.0 )
        {
          if ( v44 )
          {
            v44->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v44->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v39->LockEntries[v43].TreeNode);
            v51 = v44->BoostBitmap.AllFields & 0x1FFFF;
            v44->BoostBitmap.AllFields &= 0xFFFE0000;
            v44->ThreadLocalFlags &= ~1u;
            v44->LockState.0 = 0LL;
            v45 = 1 << (((char *)v44 - (char *)v39 - 800) / 96);
            if ( v50 == 1 )
              v39->AbEntrySummary |= v45;
            else
              _InterlockedOr8((volatile signed __int8 *)&v39->AbOrphanedEntrySummary, v45);
            goto LABEL_69;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v39->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v39, v13, SessionId, 0LL);
LABEL_69:
    --v39->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v39, v13, &v51);
    v31 = v39->SpecialApcDisable++ == -1;
    if ( v31 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v39->ApcState.ApcListHead[0].Flink != &v39->152 )
      KiCheckForKernelApcDelivery(v46);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v2 = v53;
  }
  v53 = 0LL;
  v37 = *(_QWORD *)(a2 + 96);
  LOWORD(v53) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 8 * v21), 2LL, 0LL);
  if ( !result )
  {
    result = (__int64)RtlpHpLfhBucketAllocateSlot(v2, a2, v21);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v21) = result;
    if ( result )
    {
      _InterlockedOr(v49, 0);
      v38 = v56;
      *(_BYTE *)(a2 + 2) = v21 + 1;
      result = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v38 + result) = v21;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
