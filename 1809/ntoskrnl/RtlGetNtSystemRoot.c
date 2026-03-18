/*
 * XREFs of RtlGetNtSystemRoot @ 0x140682430
 * Callers:
 *     ObpUseSystemDeviceMap @ 0x140582400 (ObpUseSystemDeviceMap.c)
 *     MiDriverLoadSucceeded @ 0x140681C04 (MiDriverLoadSucceeded.c)
 *     AslEnvVarQuery @ 0x140722254 (AslEnvVarQuery.c)
 *     WheapWriteTriageDump @ 0x1408DC808 (WheapWriteTriageDump.c)
 *     SdbpGetProcessHistory @ 0x1408E7C50 (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetNtSystemRoot()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 30LL;
  else
    return 0xFFFFF78000000030uLL;
}
