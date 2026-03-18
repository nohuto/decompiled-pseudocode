/*
 * XREFs of ExpTryQueueWorkItem @ 0x14008068C
 * Callers:
 *     ExTryQueueWorkItem @ 0x140080660 (ExTryQueueWorkItem.c)
 *     IoTryQueueWorkItem @ 0x140181100 (IoTryQueueWorkItem.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005B338 (ExpValidateWorkItem.c)
 *     KeInsertPriQueue @ 0x14005B380 (KeInsertPriQueue.c)
 *     ExpIsPoolReadyForWork @ 0x14005C070 (ExpIsPoolReadyForWork.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14008099C (ExpPartitionCreateThreadIfNecessary.c)
 *     ExpTypeToPriority @ 0x1400809E4 (ExpTypeToPriority.c)
 *     MmGetNextNode @ 0x140080AF4 (MmGetNextNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExpTryQueueWorkItem(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  __int64 v5; // r13
  char inserted; // r14
  __int64 CurrentIrql; // rdi
  unsigned __int16 v10; // si
  unsigned __int16 NextNode; // ax
  __int64 v12; // r11
  __int64 v13; // rbp
  int v14; // r9d
  char v15; // r10
  __int64 v16; // r11
  __int64 v17; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+34h] [rbp-34h] BYREF
  __int64 v22; // [rsp+38h] [rbp-30h]

  v5 = a4;
  v21 = 0;
  inserted = 0;
  ExpValidateWorkItem(a2, a3);
  v20 = ExpTypeToPriority(a3);
  CurrentIrql = KeGetCurrentIrql();
  v22 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v10 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  NextNode = v10;
  if ( v10 < (unsigned __int16)KeNumberNodes )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = KeNodeBlock[NextNode];
      if ( (_UNKNOWN *)v13 == (_UNKNOWN *)((char *)&KiNodeInit + 384 * NextNode) )
        v13 = v12;
      if ( ExpIsPoolReadyForWork(a1, v13, v5) )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(v13 + 146)) + 8 * v5);
        if ( (v17 & 1) != 0 )
          v17 = v16;
        inserted = KeInsertPriQueue(v17, a2, v20, v14, v15);
        if ( inserted )
        {
LABEL_10:
          LOBYTE(CurrentIrql) = v22;
          break;
        }
        *(_DWORD *)(v17 + 716) |= 0x80000000;
        ExpPartitionCreateThreadIfNecessary(a1, v13, v17);
      }
      NextNode = MmGetNextNode(v10, &v21);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_10;
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return inserted;
}
