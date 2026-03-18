/*
 * XREFs of ExpQueueWorkItem @ 0x14008081C
 * Callers:
 *     ExQueueWorkItemToPartition @ 0x140080598 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x140080600 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x140080B4C (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140167FA4 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x14033BD58 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     ExpIsPoolReadyForWork @ 0x14005C070 (ExpIsPoolReadyForWork.c)
 *     ExpQueueWorkItemNode @ 0x140080930 (ExpQueueWorkItemNode.c)
 *     MmGetNextNode @ 0x140080AF4 (MmGetNextNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExpQueueWorkItem(__int64 a1, int a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r10d
  char v6; // di
  unsigned __int8 CurrentIrql; // bl
  _KNODE *ParentNode; // rcx
  unsigned int NextNode; // ecx
  int v13; // r11d
  char *v14; // rsi
  unsigned int v15; // r10d
  int v16; // r11d
  struct _KPRCB *CurrentPrcb; // rcx
  int v19; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  v6 = 0;
  v19 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  if ( a4 >= (unsigned __int16)KeNumberNodes )
    v5 = ParentNode->Affinity.Reserved[0];
  LOWORD(NextNode) = v5;
  if ( v5 < (unsigned __int16)KeNumberNodes )
  {
    v13 = a5;
    while ( 1 )
    {
      v14 = (char *)KeNodeBlock[(unsigned __int16)NextNode];
      if ( v14 == (char *)&KiNodeInit + 384 * (unsigned __int16)NextNode )
        v14 = 0LL;
      if ( ExpIsPoolReadyForWork(a1, (__int64)v14, v13) )
        break;
      NextNode = MmGetNextNode(v15, &v19);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_10;
    }
    ExpQueueWorkItemNode(a1, a2, a3, (_DWORD)v14, v16);
    v6 = 1;
  }
LABEL_10:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v6;
}
