/*
 * XREFs of PsTerminateSystemThread @ 0x1406ADC90
 * Callers:
 *     PopIrpWorker @ 0x14017B5B0 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x140291DC0 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 *     IopThreadStart @ 0x14071EF90 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x14090A1C0 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x14067DB90 (PspTerminateThreadByPointer.c)
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
