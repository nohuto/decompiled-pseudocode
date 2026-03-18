/*
 * XREFs of MiSynchronizeSystemVa @ 0x140075BC0
 * Callers:
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MiLockStealSystemVm @ 0x14012CDC0 (MiLockStealSystemVm.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiFillPteHierarchy @ 0x14005F0B0 (MiFillPteHierarchy.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiGetSystemCacheReverseMap @ 0x140075F40 (MiGetSystemCacheReverseMap.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x1400AB5F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockSystemVa @ 0x1400C46E8 (MiUnlockSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiPageTableStillExists @ 0x1401397C8 (MiPageTableStillExists.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSynchronizeSystemVa(__int64 a1, unsigned __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v9; // rbx
  int v10; // ebp
  char v11; // al
  unsigned __int8 v12; // al
  LONG *v13; // rdi
  unsigned __int8 v14; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v17; // ett
  unsigned __int8 CurrentIrql; // dl
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r15
  int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdi
  __int64 SystemCacheReverseMap; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 AnyMultiplexedVm; // rax
  _DWORD *v31; // rcx
  __int64 v32; // r9
  unsigned __int64 valid; // rax
  LONG *SharedVm; // rdi
  KIRQL v35; // al
  int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v39[5]; // [rsp+28h] [rbp-50h] BYREF
  int v40; // [rsp+90h] [rbp+18h] BYREF

  memset(v39, 0, 0x20uLL);
  if ( !a3 )
    return 0LL;
  v9 = a5;
  v10 = 0;
  *(_DWORD *)(a5 + 16) = 0;
  v11 = *(_BYTE *)(v9 + 37);
  *(_QWORD *)(v9 + 24) = a1;
  if ( a4 )
  {
    *(_BYTE *)(v9 + 37) = v11 | 1;
    SharedVm = MiGetSharedVm(a1);
    v35 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    *(_BYTE *)(v9 + 36) = v35;
    MiFillPteHierarchy(a2, v39);
    if ( (unsigned int)MiPageTableStillExists(v39, &v40) )
    {
      if ( v40 )
      {
        if ( (*(_DWORD *)(v9 + 4) & 4) == 0 )
          goto LABEL_55;
        *(_DWORD *)(v9 + 16) = v40;
      }
LABEL_18:
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        return 1LL;
      if ( *(_DWORD *)(v9 + 48) == 3 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
LABEL_26:
        *(_QWORD *)(v9 + 24) = AnyMultiplexedVm;
        return 1LL;
      }
      SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2, v22);
      if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 16) )
      {
        v28 = *(_QWORD *)(MiGetSystemCacheReverseMap(a2, v27) + 24);
        v29 = v28 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v28 & 1) == 0 )
          v29 = v28;
        AnyMultiplexedVm = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v29 + 60LL) & 0x3FF)) + 0x2000LL;
        goto LABEL_26;
      }
    }
  }
  else
  {
    *(_BYTE *)(v9 + 37) = v11 & 0xFE;
    v12 = *(_BYTE *)(a1 + 184) & 7;
    if ( v12 >= 6u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
    else
    {
      if ( v12 == 2 )
        v13 = &dword_140466F00;
      else
        v13 = (LONG *)(a1 + 192);
      v14 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v14 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v13, v14);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v36 = SchedulerAssist[5];
            SchedulerAssist[5] = v36 + 1;
            if ( v36 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        _m_prefetchw(v13);
        v17 = *v13 & 0x7FFFFFFF;
        if ( v17 != _InterlockedCompareExchange(v13, v17 + 1, v17) )
        {
          v31 = CurrentPrcb->SchedulerAssist;
          if ( v31 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v37 = v31[5] - 1;
              v31[5] = v37;
              if ( !v37 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          ExpWaitForSpinLockSharedAndAcquire(v13, v14);
        }
      }
      if ( v13[1] )
        _InterlockedExchange(v13 + 1, 0);
      CurrentIrql = v14;
    }
    *(_BYTE *)(v9 + 36) = CurrentIrql;
    v38 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = MiFastLockLeafPageTable(a1, a2, 0LL);
    v23 = a2 >> 9;
    if ( v21 )
    {
      v39[0] = (v23 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39[1] = ((v39[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39[2] = ((v39[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v22 = ((v39[2] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39[3] = v22;
      v19 = v39[v21];
      v20 = v39[v21 - 1];
      v38 = v20;
    }
    v24 = (v23 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !v19 )
    {
      valid = MiLockLowestValidPageTable(a1, v24, &v38);
      v20 = v38;
      v19 = valid;
    }
    *(_QWORD *)(v9 + 40) = v19;
    if ( v20 == v24 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v9 + 4) & 4) != 0 && (MI_READ_PTE_LOCK_FREE(v20) & 0x81) == 0x81 )
    {
      do
      {
        v24 = (v32 & (v24 >> 9)) - 0x98000000000LL;
        ++v10;
      }
      while ( v24 != v20 );
      *(_DWORD *)(v9 + 16) = v10;
      return 1LL;
    }
  }
LABEL_55:
  MiUnlockSystemVa(v9);
  return 0LL;
}
