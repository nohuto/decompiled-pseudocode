/*
 * XREFs of RtlGetNtSystemRoot @ 0x1406E8730
 * Callers:
 *     MiDriverLoadSucceeded @ 0x14070E4FC (MiDriverLoadSucceeded.c)
 *     AslEnvVarQuery @ 0x14074C2CC (AslEnvVarQuery.c)
 *     WheapWriteTriageDump @ 0x14091AA7C (WheapWriteTriageDump.c)
 *     SdbpGetProcessHistory @ 0x1409243B0 (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
