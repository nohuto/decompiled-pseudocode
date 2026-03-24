/*
 * XREFs of ExpTypeToPriority @ 0x1400D1A58
 * Callers:
 *     ExQueueWorkItemFromIo @ 0x1400D16A4 (ExQueueWorkItemFromIo.c)
 *     ExpTryQueueWorkItem @ 0x1400D172C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2EEC (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemEx @ 0x1401296E4 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x14031D088 (ExQueueWorkItemExFromIo.c)
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
