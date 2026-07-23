/*
 * XREFs of ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014E210
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014C604 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140170AE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     SmIoRequestComplete @ 0x14014CA9C (SmIoRequestComplete.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014E3BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(__int64 a1, __int64 a2, KIRQL a3, int a4)
{
  __int64 **v4; // rbx
  volatile LONG *v6; // rsi
  KIRQL v7; // bp
  int v9; // ebp
  int v10; // r14d
  __int64 *v11; // rdx
  __int64 *v12; // rdi
  __int64 result; // rax
  KIRQL v14; // bp
  __int64 v15; // rdx
  unsigned __int64 *v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v18; // rcx
  __int64 v19; // r8
  struct _EX_RUNDOWN_REF *v20; // rax
  struct _KPRCB *v21; // rcx

  v4 = (__int64 **)(a1 + 96);
  v6 = (volatile LONG *)(a1 + 112);
  v7 = a3;
  if ( a3 == 0xFF )
    goto LABEL_4;
  while ( 1 )
  {
    v10 = 0;
    if ( !a4 && (*v4[1] & 0xFFFFFFFFFFFFFFF8uLL) < 0x80 )
      v10 = 4;
    v11 = v4[1];
    if ( v11 == (__int64 *)v4 )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = *v4;
      *v4 = (__int64 *)(**v4 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v12 == v11 )
      {
        *v4 = 0LL;
        v4[1] = (__int64 *)v4;
      }
      else
      {
        *v11 = *v11 & 7 | (8 * (((unsigned __int64)*v11 >> 3) - 1));
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v7;
    __writecr8(v7);
    if ( !v12 )
      break;
    v9 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
           a2,
           (int)v12 + 24,
           1,
           *(_DWORD *)(v12[13] + 6016) & 0x3FF,
           (__int64)v12,
           v12[4],
           v10);
    if ( v9 < 0 )
    {
      if ( v9 == -1073741739 )
      {
        v14 = ExAcquireSpinLockExclusive(v6);
        v15 = ((unsigned __int64)*v4[1] >> 3) + 1;
        *v12 = (unsigned __int64)*v4 | *(_DWORD *)v12 & 7;
        v16 = (unsigned __int64 *)v4[1];
        *v4 = v12;
        if ( v16 == (unsigned __int64 *)v4 )
        {
          v4[1] = v12;
          v16 = (unsigned __int64 *)v12;
        }
        *v16 = *(_DWORD *)v16 & 7 | (unsigned __int64)(8 * v15);
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
        {
          v21 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v21);
        }
        result = v14;
        __writecr8(v14);
        return result;
      }
      MmUnmapLockedPages(*(PVOID *)(*(_QWORD *)v12[2] + 24LL), *(PMDL *)v12[2]);
      v18 = (__int64 *)v12[4];
      v19 = *v18;
      *(_DWORD *)v18 = v9;
      *(_QWORD *)(v12[4] + 8) = 0LL;
      SmIoRequestComplete((__int64)v18, v12, v19, v12[4]);
      v20 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, *(_DWORD *)(v12[13] + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v20 + 1);
      ExFreePoolWithTag(v12, 0);
    }
LABEL_4:
    v7 = ExAcquireSpinLockExclusive(v6);
  }
  return result;
}
