/*
 * XREFs of ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14015141C
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014EAD0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140151540 (ExQueueWorkItemToPrivatePool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  KSPIN_LOCK *v3; // r15
  __int128 *v5; // rdi
  KIRQL v6; // si
  ULONG_PTR *v7; // rdx
  ULONG_PTR *result; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rbx
  __int128 v11; // xmm0
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-10h] BYREF

  BugCheckParameter2[0] = 0LL;
  BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
  v3 = (KSPIN_LOCK *)(a1 + 768);
  *(_DWORD *)(a2 + 32) ^= (*(_DWORD *)(a2 + 32) ^ a3) & 7;
  v5 = (__int128 *)(a1 + 24LL * a3);
  *(_DWORD *)(a2 + 40) ^= (*(_DWORD *)(a2 + 40) ^ (a3 >> 3)) & 3;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 768));
  if ( *((_DWORD *)v5 + 4) || *((_DWORD *)v5 + 5) )
  {
    *(_QWORD *)a2 = **((_QWORD **)v5 + 1) + 1LL;
    **((_QWORD **)v5 + 1) = a2;
    *((_QWORD *)v5 + 1) = a2;
    v10 = *(_QWORD *)a2;
    if ( v10 >= KeQueryActiveProcessorCountEx(0xFFFFu) && *((__int128 **)v5 + 1) != v5 )
    {
      v11 = *v5;
      *((_QWORD *)v5 + 1) = v5;
      *(_OWORD *)BugCheckParameter2 = v11;
      *(_QWORD *)v5 = 0LL;
    }
  }
  else
  {
    v7 = (ULONG_PTR *)BugCheckParameter2[1];
    *(_QWORD *)a2 = *(_QWORD *)BugCheckParameter2[1] + 1LL;
    *v7 = a2;
    BugCheckParameter2[1] = a2;
  }
  *((_DWORD *)v5 + 4) += *(_DWORD *)BugCheckParameter2[1];
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v6);
  while ( 1 )
  {
    result = BugCheckParameter2;
    if ( (ULONG_PTR *)BugCheckParameter2[1] == BugCheckParameter2 )
      break;
    v9 = (_QWORD *)BugCheckParameter2[0];
    BugCheckParameter2[0] = *(_QWORD *)BugCheckParameter2[0];
    if ( v9 == (_QWORD *)BugCheckParameter2[1] )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
    }
    else
    {
      --*(_QWORD *)BugCheckParameter2[1];
    }
    *v9 = 0LL;
    v9[2] = SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker;
    v9[3] = v9;
    ExQueueWorkItemToPrivatePool((ULONG_PTR)v9);
  }
  return result;
}
