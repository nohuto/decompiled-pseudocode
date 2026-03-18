/*
 * XREFs of KiSchedulerApcTerminate @ 0x1406D2E00
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x14012A288 (KiIsProcessTerminationRequested.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PsTerminateProcess @ 0x1406E90D0 (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread((unsigned int)KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink);
  JUMPOUT(0x1406D2E33LL);
}
