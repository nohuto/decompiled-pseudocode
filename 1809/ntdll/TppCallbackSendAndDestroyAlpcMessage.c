/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x1800846E0
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1801106D0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1800A1430 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall TppCallbackSendAndDestroyAlpcMessage(__int64 a1)
{
  unsigned __int32 v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(HANDLE *)(a1 + 216),
         *(_DWORD *)(a1 + 224),
         *(PPORT_MESSAGE *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 208));
  return v2;
}
