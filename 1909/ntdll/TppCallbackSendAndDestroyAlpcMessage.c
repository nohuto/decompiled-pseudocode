/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x18007F204
 * Callers:
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x18008C580 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18009DFC0 (ZwAlpcSendWaitReceivePort.c)
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
