/*
 * XREFs of sub_18007EB64 @ 0x18007EB64
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x18008BEE0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18009D810 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall sub_18007EB64(__int64 a1)
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
