/*
 * XREFs of ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140170AE0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014C604 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014E210 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140159A14 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread(PVOID StartContext)
{
  PRKEVENT v1; // rdi
  KIRQL v3; // al
  __int64 v4; // r8
  struct _LIST_ENTRY *Flink; // rdx
  KIRQL v6; // bl
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v8; // ebx
  KIRQL v9; // si
  __int64 p_Blink; // rbx
  LIST_ENTRY *p_WaitListHead; // rcx
  LIST_ENTRY *Blink; // rdx
  LIST_ENTRY *v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 Blink_high; // rax
  PRKEVENT v16; // rcx
  PRKEVENT **v17; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v19; // rcx
  struct _KPRCB *v20; // rcx
  struct _KPRCB *v21; // rcx
  PRKEVENT v22; // [rsp+30h] [rbp-20h] BYREF
  PRKEVENT **v23; // [rsp+38h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF

  v1 = *(PRKEVENT *)StartContext;
  v22 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v25 = -50000000LL;
  v3 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
  ++HIDWORD(v1[3].Header.WaitListHead.Blink);
  Flink = v1[3].Header.WaitListHead.Flink;
  v6 = v3;
  if ( (PRKEVENT)Flink->Flink != &v1[3] )
    goto LABEL_32;
  v22 = v1 + 3;
  v23 = (PRKEVENT **)Flink;
  Flink->Flink = (struct _LIST_ENTRY *)&v22;
  v1[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v22;
  KeSetActualBasePriorityThread((__int64)CurrentThread, LODWORD(v1[5].Header.WaitListHead.Flink), v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v6);
  KeSetEvent(*((PRKEVENT *)StartContext + 2), 0, 0);
  while ( 1 )
  {
    while ( 1 )
    {
      Timeout = (LARGE_INTEGER *)&v25;
      if ( HIDWORD(v1[3].Header.WaitListHead.Blink) <= 1 )
        Timeout = 0LL;
      v8 = KeWaitForSingleObject(&v1[1], WrKernel, 0, 0, Timeout);
      v9 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
      if ( v8 == 258 )
        break;
      p_Blink = 0LL;
      while ( 1 )
      {
        if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > LODWORD(v1[3].Header.WaitListHead.Blink) )
        {
          if ( !p_Blink )
            goto LABEL_25;
          v13 = 0LL;
        }
        else
        {
          p_WaitListHead = &v1->Header.WaitListHead;
          Blink = v1->Header.WaitListHead.Blink;
          if ( Blink == &v1->Header.WaitListHead )
          {
            v13 = 0LL;
            KeResetEvent(v1 + 1);
          }
          else
          {
            v13 = p_WaitListHead->Flink;
            p_WaitListHead->Flink = p_WaitListHead->Flink->Flink;
            if ( v13 == Blink )
            {
              v1->Header.WaitListHead.Blink = &v1->Header.WaitListHead;
              p_WaitListHead->Flink = 0LL;
            }
            else
            {
              --Blink->Flink;
            }
          }
        }
        if ( !v1[1].Header.SignalState && v1->Header.WaitListHead.Blink->Flink >= (struct _LIST_ENTRY *)3 )
          KeSetEvent(v1 + 1, 0, 0);
        ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          v20 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v20);
        }
        __writecr8(v9);
        v14 = *((_QWORD *)StartContext + 1);
        if ( !v13 )
          break;
        p_Blink = (__int64)&v13[-5].Blink;
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(
          (__int64)v1,
          v14,
          *((void **)StartContext + 3),
          *((void **)StartContext + 4),
          p_Blink);
        v9 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
        Blink_high = HIDWORD(v1[3].Header.WaitListHead.Blink);
        if ( LODWORD(v1[3].Header.WaitListHead.Blink) > (unsigned int)Blink_high
          && (unsigned __int64)v1->Header.WaitListHead.Blink->Flink >> 1 > Blink_high )
        {
          KeSetEvent(v1 + 2, 0, 0);
        }
      }
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue((__int64)v1, v14, 0xFFu, 1);
    }
    if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > 1 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    __writecr8(v9);
  }
LABEL_25:
  if ( !v1[1].Header.SignalState
    && (v1->Header.WaitListHead.Blink != &v1->Header.WaitListHead || !LODWORD(v1[3].Header.WaitListHead.Blink)) )
  {
    KeSetEvent(v1 + 1, 0, 0);
  }
  v16 = v22;
  v17 = v23;
  if ( (PRKEVENT *)v22->Header.WaitListHead.Flink != &v22 || *v23 != &v22 )
LABEL_32:
    __fastfail(3u);
  *v23 = (PRKEVENT *)v22;
  v16->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v17;
  --HIDWORD(v1[3].Header.WaitListHead.Blink);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(v9);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams((struct _EX_RUNDOWN_REF **)StartContext);
}
