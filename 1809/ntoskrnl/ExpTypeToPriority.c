/*
 * XREFs of ExpTypeToPriority @ 0x1400D1AD8
 * Callers:
 *     ExQueueWorkItemFromIo @ 0x1400D1724 (ExQueueWorkItemFromIo.c)
 *     ExpTryQueueWorkItem @ 0x1400D17AC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemEx @ 0x1401297B4 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x14031D278 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return ExpBuiltinPriorities[a1];
}
