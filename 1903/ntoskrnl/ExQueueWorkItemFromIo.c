/*
 * XREFs of ExQueueWorkItemFromIo @ 0x140080200
 * Callers:
 *     IoQueueWorkItemEx @ 0x140080170 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItem @ 0x140080720 (IoQueueWorkItem.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140145580 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005B298 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x14008041C (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400805E4 (ExpTypeToPriority.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  int v4; // eax
  __int64 result; // rax

  v2 = a2;
  ExpValidateWorkItem(BugCheckParameter2, a2);
  v4 = ExpTypeToPriority((unsigned int)v2);
  result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), (_DWORD)BugCheckParameter2, v4, -1, 1);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
