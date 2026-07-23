/*
 * XREFs of RtlGetNtSystemRoot @ 0x1406E97D0
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1407102DC (MiDriverLoadSucceeded.c)
 *     AslEnvVarQuery @ 0x14074CD5C (AslEnvVarQuery.c)
 *     WheapWriteTriageDump @ 0x14091A4DC (WheapWriteTriageDump.c)
 *     SdbpGetProcessHistory @ 0x140923E10 (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
