/*
 * XREFs of PsTerminateServerSilo @ 0x1408C4E30
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x1408C9944 (PspCatchCriticalBreak.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400E5F70 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406E0F14 (PspTerminateAllProcessesInJobHierarchy.c)
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
