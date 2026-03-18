/*
 * XREFs of VidSchiSendToExecutionQueueWithWait @ 0x1C007A8EC
 * Callers:
 *     VidSchiSwitchNodeFromContext @ 0x1C007A720 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C007A828 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00C737C (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     VidSchiSendToExecutionQueue @ 0x1C0005150 (VidSchiSendToExecutionQueue.c)
 */

void __fastcall VidSchiSendToExecutionQueueWithWait(__int64 a1, char a2)
{
  struct _KEVENT *v4; // rcx

  v4 = *(struct _KEVENT **)(*(_QWORD *)(a1 + 48) + 96LL);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 8;
  v4[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  KeResetEvent(v4 + 10);
  VidSchiSendToExecutionQueue(a1, a2);
}
