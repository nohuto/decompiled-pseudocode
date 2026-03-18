/*
 * XREFs of ExpTypeToPriority @ 0x1400805E4
 * Callers:
 *     ExQueueWorkItemToPartition @ 0x140080198 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x140080200 (ExQueueWorkItemFromIo.c)
 *     ExpTryQueueWorkItem @ 0x14008028C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x14008074C (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x14033C2F8 (ExQueueWorkItemExFromIo.c)
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
