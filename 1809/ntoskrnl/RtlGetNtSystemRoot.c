/*
 * XREFs of RtlGetNtSystemRoot @ 0x1406835D0
 * Callers:
 *     ObpUseSystemDeviceMap @ 0x140583400 (ObpUseSystemDeviceMap.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     AslEnvVarQuery @ 0x1407234D4 (AslEnvVarQuery.c)
 *     WheapWriteTriageDump @ 0x1408DDAA8 (WheapWriteTriageDump.c)
 *     SdbpGetProcessHistory @ 0x1408E8EF0 (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
