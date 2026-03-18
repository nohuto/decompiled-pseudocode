/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140191760
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF20 (KeSetActualBasePriorityThread.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x1401598F4 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14017725C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(__int64 *P, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  KIRQL v5; // di
  unsigned int v6; // ecx
  unsigned __int64 v7; // rax
  struct _KPRCB *v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v10; // rcx

  v3 = *P;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25LL, a3);
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(v3 + 48), WrKernel, 0, 0, 0LL);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3);
    KeResetEvent((PRKEVENT)(v3 + 48));
    v6 = *(_DWORD *)(v3 + 88);
    if ( !v6 )
      break;
    v7 = *(unsigned int *)(v3 + 92);
    if ( v6 <= (unsigned int)v7 || **(_QWORD **)(v3 + 16) >> 1 <= v7 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v5);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        v8 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v8);
      }
      __writecr8(v5);
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(v3, P[1], 1u);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v10);
  }
  __writecr8(v5);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams((struct _EX_RUNDOWN_REF **)P);
}
