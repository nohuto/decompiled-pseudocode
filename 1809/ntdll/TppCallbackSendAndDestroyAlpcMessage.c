/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x1800846D0
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1801106D0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1800A1410 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall TppCallbackSendAndDestroyAlpcMessage(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(_QWORD *)(a1 + 216),
         *(unsigned int *)(a1 + 224),
         *(_QWORD *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(a1 + 208));
  return v2;
}
