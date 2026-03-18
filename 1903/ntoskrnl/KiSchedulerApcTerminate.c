/*
 * XREFs of KiSchedulerApcTerminate @ 0x1406D3B10
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x140129868 (KiIsProcessTerminationRequested.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PsTerminateProcess @ 0x1406E7FD0 (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread((unsigned int)KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink);
  JUMPOUT(0x1406D3B43LL);
}
