/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140198EA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140147954 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14015BE60 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(__int64 *P)
{
  __int64 v1; // rbx
  KIRQL v3; // di
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  struct _KPRCB *v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v8; // rcx

  v1 = *P;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25LL);
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(v1 + 48), WrKernel, 0, 0, 0LL);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
    KeResetEvent((PRKEVENT)(v1 + 48));
    v4 = *(_DWORD *)(v1 + 88);
    if ( !v4 )
      break;
    v5 = *(unsigned int *)(v1 + 92);
    if ( v4 <= (unsigned int)v5 || **(_QWORD **)(v1 + 16) >> 1 <= v5 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v3);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
      {
        v6 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v6);
      }
      __writecr8(v3);
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(v1, P[1], 1u);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    v8 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v8);
  }
  __writecr8(v3);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams((struct _EX_RUNDOWN_REF **)P);
}
