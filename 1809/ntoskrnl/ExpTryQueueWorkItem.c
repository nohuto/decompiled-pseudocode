/*
 * XREFs of ExpTryQueueWorkItem @ 0x1400D17AC
 * Callers:
 *     ExTryQueueWorkItem @ 0x1400D1780 (ExTryQueueWorkItem.c)
 *     IoTryQueueWorkItem @ 0x140141710 (IoTryQueueWorkItem.c)
 * Callees:
 *     MmGetNextNode @ 0x140061FC0 (MmGetNextNode.c)
 *     ExpIsPoolReadyForWork @ 0x1400B7530 (ExpIsPoolReadyForWork.c)
 *     KeInsertPriQueue @ 0x1400D1940 (KeInsertPriQueue.c)
 *     ExpTypeToPriority @ 0x1400D1AD8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1400D1AF8 (ExpValidateWorkItem.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14012AFF0 (ExpPartitionCreateThreadIfNecessary.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExpTryQueueWorkItem(__int64 a1, ULONG_PTR a2, unsigned int a3, int a4)
{
  int v4; // r12d
  __int64 v5; // r13
  char inserted; // r14
  __int64 CurrentIrql; // rdi
  unsigned __int16 v10; // si
  unsigned __int16 NextNode; // ax
  __int64 v12; // r11
  __int64 v13; // rbp
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // r11
  __int64 v17; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+34h] [rbp-34h] BYREF
  __int64 v22; // [rsp+38h] [rbp-30h]

  v4 = a2;
  v5 = a4;
  v21 = 0;
  inserted = 0;
  ExpValidateWorkItem(a2);
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
        inserted = KeInsertPriQueue(v17, v4, v20, v14, v15);
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
