/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x1400EEE4C
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x1400F06DC (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllPagesWorker @ 0x1401532B8 (MiFlushAllPagesWorker.c)
 *     MiModifiedPageWriter @ 0x140188880 (MiModifiedPageWriter.c)
 *     MiFlushAllHintedStorePages @ 0x1402B8224 (MiFlushAllHintedStorePages.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140030FC4 (MiGetAvailablePagesBelowPriority.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400E1194 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x1400EEF9C (KeQueryEffectiveBasePriorityThread.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1400EEFC8 (MiUseLowIoPriorityForModifiedPages.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140156940 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v9; // r8
  unsigned __int8 OldIrql; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v14[2]; // [rsp+20h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4864), v14);
  v2 = *(_QWORD *)(a1 + 7296);
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
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 7024) + 2400LL) )
      {
        v8 = 2;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 7792);
        if ( v7 >= AvailablePagesBelowPriority + 0x2000 )
          v8 = (v7 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
        else
          v8 = 4;
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1176)) != v5 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1176), v5, v9);
  if ( v4 )
    KeSetEvent((PRKEVENT)(a1 + 1184), 0, 0);
  if ( (unsigned __int8)byte_14055C168 != v8 || !v8 || byte_14055C169 != (v3 == 0) )
  {
    byte_14055C168 = v8;
    byte_14055C169 = v3 == 0;
    _InterlockedOr(v13, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions((__int64)&SmGlobals, v8);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v14);
  OldIrql = v14[0].OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14[0].OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  if ( !v8 )
    return SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_14055BF40, 0LL);
  return result;
}
