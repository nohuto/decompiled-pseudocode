/*
 * XREFs of ExpTypeToPriority @ 0x1400809E4
 * Callers:
 *     ExQueueWorkItemToPartition @ 0x140080598 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x140080600 (ExQueueWorkItemFromIo.c)
 *     ExpTryQueueWorkItem @ 0x14008068C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x140080B4C (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x14033BD58 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return (unsigned int)ExpBuiltinPriorities[a1];
}
