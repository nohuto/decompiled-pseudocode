/*
 * XREFs of KiSchedulerApcTerminate @ 0x1406767A0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x1400F2358 (KiIsProcessTerminationRequested.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PsTerminateProcess @ 0x1406C98D4 (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread((unsigned int)KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink);
  JUMPOUT(0x1406767D3LL);
}
