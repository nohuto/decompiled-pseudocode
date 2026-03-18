/*
 * XREFs of PsTerminateSystemThread @ 0x1406B85A0
 * Callers:
 *     PopIrpWorker @ 0x14017AEC0 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x140292060 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x1406B76B0 (EtwpLogger.c)
 *     IopThreadStart @ 0x14071D100 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x14090A760 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x140678480 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    return PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, ExitStatus, 1);
  else
    return -1073741811;
}
