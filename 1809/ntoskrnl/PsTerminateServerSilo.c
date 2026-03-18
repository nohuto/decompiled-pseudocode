/*
 * XREFs of PsTerminateServerSilo @ 0x140886A90
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x14057E930 (ExpSystemErrorHandler2.c)
 *     PspInitializeServerSiloDeferred @ 0x140887460 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x14088AFC4 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x14088B490 (PspCatchCriticalBreak.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008FD60 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406C6FA4 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  unsigned int v1; // edx
  struct _KEVENT *v2; // rcx

  if ( a1 )
  {
    if ( PsIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v2, v1, 0);
  }
}
