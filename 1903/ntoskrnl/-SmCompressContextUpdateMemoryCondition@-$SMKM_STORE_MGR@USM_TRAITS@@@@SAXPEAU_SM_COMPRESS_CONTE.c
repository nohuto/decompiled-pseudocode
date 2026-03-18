/*
 * XREFs of ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14013A9DC
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14009A66C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextUpdateMemoryCondition(
        PEX_SPIN_LOCK SpinLock,
        int a2,
        int a3)
{
  int v5; // edi
  ULONG ActiveProcessorCount; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  KIRQL v9; // bp
  __int64 result; // rax
  __int64 **i; // r14
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a2 == 4 )
    v5 = 7;
  else
    v5 = `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[a2];
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = ActiveProcessorCount;
  if ( !a3 )
    goto LABEL_4;
  if ( v5 <= 7 )
  {
    v7 = 3 * ActiveProcessorCount;
LABEL_10:
    v8 = v7 >> 2;
    goto LABEL_11;
  }
  if ( v5 > 8 )
  {
    if ( v5 <= 10 )
      goto LABEL_10;
    v8 = ActiveProcessorCount >> 3;
  }
  else
  {
    v8 = ActiveProcessorCount >> 1;
  }
LABEL_11:
  if ( !v8 )
  {
LABEL_4:
    v8 = 1;
    goto LABEL_5;
  }
  if ( v8 >= 0x10 )
    v8 = 16;
LABEL_5:
  v9 = ExAcquireSpinLockExclusive(SpinLock);
  if ( *((_DWORD *)SpinLock + 32) != v5 )
  {
    *((_DWORD *)SpinLock + 32) = v5;
    for ( i = (__int64 **)*((_QWORD *)SpinLock + 9); i != (__int64 **)(SpinLock + 18); i = (__int64 **)*i )
      KeSetActualBasePriorityThread((__int64)i[2], (unsigned int)v5);
  }
  *((_DWORD *)SpinLock + 22) = v8;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v9;
  __writecr8(v9);
  return result;
}
