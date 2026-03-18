/*
 * XREFs of ExpValidateWorkItem @ 0x14005B298
 * Callers:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x140080198 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x140080200 (ExQueueWorkItemFromIo.c)
 *     ExpTryQueueWorkItem @ 0x14008028C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x14008074C (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140168554 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x14033C2F8 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpValidateWorkItem(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // r9
  __int64 result; // rax

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v2 = BugCheckParameter2[2];
  result = 0x7FFFFFFF0000LL;
  if ( v2 <= 0x7FFFFFFF0000LL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  return result;
}
