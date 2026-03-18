/*
 * XREFs of PsTerminateSystemThread @ 0x1406CC590
 * Callers:
 *     PopIrpWorker @ 0x140171720 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x14027D4E0 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x1405C1430 (EtwpLogger.c)
 *     IopThreadStart @ 0x1407015F0 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x140735B50 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x1408CD170 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1406765B0 (PspTerminateThreadByPointer.c)
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
