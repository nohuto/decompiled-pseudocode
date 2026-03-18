/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x1400F3268
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x1400F2538 (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllHintedStorePages @ 0x1401406F8 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x140160C18 (MiFlushAllPagesWorker.c)
 *     MiModifiedPageWriter @ 0x1401924B0 (MiModifiedPageWriter.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14009A66C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400DAF6C (MiGetAvailablePagesBelowPriority.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x1400F33C8 (KeQueryEffectiveBasePriorityThread.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1400F33F4 (MiUseLowIoPriorityForModifiedPages.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14015ABCC (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // r15d
  int v4; // ebp
  unsigned int v5; // esi
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v7; // rcx
  int v8; // ebx
  unsigned __int8 OldIrql; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4864), &LockHandle);
  v2 = *(_QWORD *)(a1 + 8064);
  v3 = MiUseLowIoPriorityForModifiedPages(a1);
  if ( v2 < 0xA0 )
  {
    v8 = 0;
    v5 = 18;
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( v2 < 0x420 )
    {
      v8 = 1;
      v5 = 18;
    }
    else
    {
      v5 = 8;
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority((_QWORD *)a1, 6u);
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 7800) + 2400LL) )
      {
        v8 = 2;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 8560);
        if ( v7 >= AvailablePagesBelowPriority + 0x2000 )
          v8 = (v7 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
        else
          v8 = 4;
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1176)) != v5 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1176), v5);
  if ( v4 )
    KeSetEvent((PRKEVENT)(a1 + 1184), 0, 0);
  if ( (unsigned __int8)byte_14058C168 != v8 || !v8 || byte_14058C169 != (v3 == 0) )
  {
    byte_14058C168 = v8;
    byte_14058C169 = v3 == 0;
    _InterlockedOr(v12, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions((__int64)&SmGlobals, v8);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  if ( !v8 )
    return SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_14058BF40, 0LL);
  return result;
}
