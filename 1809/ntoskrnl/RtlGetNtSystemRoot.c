/*
 * XREFs of RtlGetNtSystemRoot @ 0x140682410
 * Callers:
 *     ObpUseSystemDeviceMap @ 0x140582400 (ObpUseSystemDeviceMap.c)
 *     MiDriverLoadSucceeded @ 0x140681BE4 (MiDriverLoadSucceeded.c)
 *     AslEnvVarQuery @ 0x140722234 (AslEnvVarQuery.c)
 *     WheapWriteTriageDump @ 0x1408DC7E8 (WheapWriteTriageDump.c)
 *     SdbpGetProcessHistory @ 0x1408E7C30 (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C20 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D40 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetNtSystemRoot()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 30LL;
  else
    return 0xFFFFF78000000030uLL;
}
