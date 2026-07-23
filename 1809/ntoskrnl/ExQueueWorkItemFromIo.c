/*
 * XREFs of ExQueueWorkItemFromIo @ 0x1400D1724
 * Callers:
 *     IoQueueWorkItemEx @ 0x1400D1B40 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItem @ 0x14012AEE0 (IoQueueWorkItem.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1400B7260 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400D1AD8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1400D1AF8 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(__int64 *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  int v4; // eax
  __int64 result; // rax

  v2 = a2;
  ExpValidateWorkItem((ULONG_PTR)BugCheckParameter2);
  v4 = ExpTypeToPriority((unsigned int)v2);
  result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), BugCheckParameter2, v4, 0xFFFFFFFF, 1u);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
