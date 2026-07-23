/*
 * XREFs of ExpAddTagForBigPages @ 0x1400E7190
 * Callers:
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     ExpAllocateBigPool @ 0x1400E6A70 (ExpAllocateBigPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1400E7498 (ExAllocateContiguousHeapPool.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1401192D0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpResizeBigPageTable @ 0x14015C570 (ExpResizeBigPageTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // edi
  unsigned __int64 v8; // r15
  int v9; // esi
  unsigned __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v15; // ett
  __int64 v16; // rdx
  volatile signed __int32 *v17; // r9
  unsigned __int64 v18; // r10
  __int64 v19; // rcx
  volatile signed __int64 v20; // rtt
  int v21; // r8d
  int v22; // r8d
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  __int64 v26; // rax
  bool v27; // cf
  __int64 v28; // rdx
  int v29; // ebx
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  _QWORD *v32; // rbx
  void *v33; // rcx
  _DWORD *v34; // rcx
  int v35; // eax
  int v36; // eax
  struct _KPRCB *v37; // rcx
  struct _KPRCB *v38; // rcx
  void *v39; // rcx
  struct _KPRCB *v40; // rcx
  int v41; // eax
  struct _KPRCB *v42; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  int v45; // [rsp+68h] [rbp+10h]
  __int64 v46; // [rsp+70h] [rbp+18h]
  unsigned int v47; // [rsp+78h] [rbp+20h]

  v46 = a3;
  v45 = a2;
  v6 = 0;
  v8 = 40543LL * (unsigned int)(a1 >> 12);
  v9 = a4 & 0x20;
  v47 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = v8 ^ HIDWORD(v8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v35 = SchedulerAssist[5];
            SchedulerAssist[5] = v35 + 1;
            if ( v35 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        _m_prefetchw(&ExpLargePoolTableLock);
        v15 = ExpLargePoolTableLock & 0x7FFFFFFF;
        if ( v15 != _InterlockedCompareExchange(
                      &ExpLargePoolTableLock,
                      (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                      ExpLargePoolTableLock & 0x7FFFFFFF) )
        {
          v34 = CurrentPrcb->SchedulerAssist;
          if ( v34 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v36 = v34[5] - 1;
              v34[5] = v36;
              if ( !v36 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
        }
        v6 = v47;
      }
      if ( v9 )
      {
        v16 = *(_QWORD *)(qword_14043B080 + 8248);
        v17 = (volatile signed __int32 *)(qword_14043B080 + 8120);
        v18 = *(_QWORD *)(qword_14043B080 + 8256);
      }
      else
      {
        v16 = PoolBigPageTable;
        v17 = &ExpPoolBigEntriesInUse;
        v18 = PoolBigPageTableSize;
      }
      if ( v16 && *v17 != v18 )
      {
        v19 = v16 + 24LL * ((unsigned int)v11 & ((_DWORD)v18 - 1));
        while ( 1 )
        {
          if ( (*(_QWORD *)v19 & 1) != 0 )
          {
            v20 = *(_QWORD *)v19;
            if ( v20 == _InterlockedCompareExchange64((volatile signed __int64 *)v19, a1, *(_QWORD *)v19) )
              break;
          }
          ++v6;
          v26 = v19 + 24;
          v27 = v19 + 24 < v16 + 24 * v18;
          v47 = v6;
          v19 = v16;
          if ( v27 )
            v19 = v26;
          if ( v19 == v16 + 24LL * ((unsigned int)v11 & ((_DWORD)v18 - 1)) )
            goto LABEL_24;
        }
        v21 = a5;
        *(_DWORD *)(v19 + 8) = v45;
        *(_BYTE *)(v19 + 12) = a6;
        v22 = (unsigned __int8)*(_DWORD *)(v19 + 12) | ((a4 & 0xFFF | (v21 << 12)) << 8);
        *(_QWORD *)(v19 + 16) = v46;
        *(_DWORD *)(v19 + 12) = v22;
        _InterlockedIncrement(v17);
        if ( v6 < 0x10 || *v17 <= (unsigned int)(v18 >> 2) )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
          }
          else
          {
            _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
            _InterlockedDecrement(&ExpLargePoolTableLock);
          }
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          if ( v24 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v41 = v24[5] - 1;
              v24[5] = v41;
              if ( !v41 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || CurrentIrql >= 2u )
            goto LABEL_19;
        }
        else
        {
          if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) == 1 )
          {
            ExpResizeBigPageTable(a4, v31, &P);
            ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
            {
              v40 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v40);
            }
            __writecr8(CurrentIrql);
            v32 = P;
            if ( P )
            {
              do
              {
                v33 = v32;
                v32 = (_QWORD *)*v32;
                ExFreePoolWithTag(v33, 0);
              }
              while ( v32 );
            }
            return 1LL;
          }
          ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || CurrentIrql >= 2u )
          {
LABEL_19:
            __writecr8(CurrentIrql);
            return 1LL;
          }
        }
        v42 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v42);
        goto LABEL_19;
      }
LABEL_24:
      if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v37 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v37);
      }
      __writecr8(CurrentIrql);
    }
    v29 = ExpResizeBigPageTable(a4, v28, &P);
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v38 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v38);
    }
    __writecr8(CurrentIrql);
    if ( !v29 )
      break;
    v30 = P;
    if ( P )
    {
      do
      {
        v39 = v30;
        v30 = (_QWORD *)*v30;
        ExFreePoolWithTag(v39, 0);
      }
      while ( v30 );
      P = 0LL;
    }
  }
  ++ExpBigTableExpansionFailed;
  return 0LL;
}
