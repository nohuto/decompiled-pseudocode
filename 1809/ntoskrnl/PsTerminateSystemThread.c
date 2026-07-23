/*
 * XREFs of PsTerminateSystemThread @ 0x1406CD810
 * Callers:
 *     PopIrpWorker @ 0x140171840 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x14027D7D0 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     IopThreadStart @ 0x140702870 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x1408CE410 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x140677750 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  struct _KTHREAD *CurrentThread; // rcx

  v2 = (unsigned int)ExitStatus;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    return -1073741811;
  LOBYTE(v1) = 1;
  return PspTerminateThreadByPointer((__int64)CurrentThread, v2, v1);
}
