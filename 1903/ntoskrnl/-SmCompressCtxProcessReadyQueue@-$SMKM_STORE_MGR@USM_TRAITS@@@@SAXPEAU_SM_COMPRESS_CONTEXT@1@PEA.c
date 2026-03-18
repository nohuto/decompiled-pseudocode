/*
 * XREFs of ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014BBD4
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140149600 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1401498BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14009A788 (SmKmStoreRefFromStoreIndex.c)
 *     SmIoRequestComplete @ 0x140149DC4 (SmIoRequestComplete.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014BD88 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(__int64 a1, __int64 a2, KIRQL a3, int a4)
{
  __int64 **v4; // rbx
  volatile LONG *v6; // rsi
  KIRQL v7; // bp
  int v9; // r14d
  __int64 *v10; // rdx
  __int64 *v11; // rdi
  __int64 result; // rax
  int v13; // ebp
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
    goto LABEL_11;
  while ( 1 )
  {
    v9 = 0;
    if ( !a4 && (*v4[1] & 0xFFFFFFFFFFFFFFF8uLL) < 0x80 )
      v9 = 4;
    v10 = v4[1];
    if ( v10 == (__int64 *)v4 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = *v4;
      *v4 = (__int64 *)(**v4 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v11 == v10 )
      {
        *v4 = 0LL;
        v4[1] = (__int64 *)v4;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * (((unsigned __int64)*v10 >> 3) - 1));
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
    if ( !v11 )
      break;
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
            a2,
            (int)v11 + 24,
            1,
            *(_DWORD *)(v11[13] + 6016) & 0x3FF,
            (__int64)v11,
            v11[4],
            v9);
    if ( v13 < 0 )
    {
      if ( v13 == -1073741739 )
      {
        v14 = ExAcquireSpinLockExclusive(v6);
        v15 = ((unsigned __int64)*v4[1] >> 3) + 1;
        *v11 = (unsigned __int64)*v4 | *(_DWORD *)v11 & 7;
        v16 = (unsigned __int64 *)v4[1];
        *v4 = v11;
        if ( v16 == (unsigned __int64 *)v4 )
        {
          v4[1] = v11;
          v16 = (unsigned __int64 *)v11;
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
      MmUnmapLockedPages(*(PVOID *)(*(_QWORD *)v11[2] + 24LL), *(PMDL *)v11[2]);
      v18 = (__int64 *)v11[4];
      v19 = *v18;
      *(_DWORD *)v18 = v13;
      *(_QWORD *)(v11[4] + 8) = 0LL;
      SmIoRequestComplete((__int64)v18, v11, v19, v11[4]);
      v20 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, *(_DWORD *)(v11[13] + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v20 + 1);
      ExFreePoolWithTag(v11, 0);
    }
LABEL_11:
    v7 = ExAcquireSpinLockExclusive(v6);
  }
  return result;
}
