/*
 * XREFs of ExpTypeToPriority @ 0x1400D1A38
 * Callers:
 *     ExQueueWorkItemFromIo @ 0x1400D1684 (ExQueueWorkItemFromIo.c)
 *     ExpTryQueueWorkItem @ 0x1400D170C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2ECC (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemEx @ 0x1401296C4 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x14031CF88 (ExQueueWorkItemExFromIo.c)
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
