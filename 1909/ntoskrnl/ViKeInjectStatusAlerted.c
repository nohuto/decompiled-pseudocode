/*
 * XREFs of ViKeInjectStatusAlerted @ 0x14097947C
 * Callers:
 *     VerifierKeDelayExecutionThread @ 0x140977F60 (VerifierKeDelayExecutionThread.c)
 *     ViKeWaitForMultipleObjectsCommon @ 0x140979874 (ViKeWaitForMultipleObjectsCommon.c)
 *     ViKeWaitForSingleObjectCommon @ 0x14097995C (ViKeWaitForSingleObjectCommon.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x1409645C0 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x140979C20 (VfFaultsInjectResourceFailure.c)
 */

_BOOL8 __fastcall ViKeInjectStatusAlerted(char a1)
{
  struct _KPROCESS *Process; // rbx
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess
        && Process != PsIdleProcess
        && (unsigned int)VfFaultsInjectResourceFailure(0LL)
        && !(unsigned int)VfUtilIsLocalSystem(Process) )
      {
        return 1;
      }
    }
  }
  return result;
}
