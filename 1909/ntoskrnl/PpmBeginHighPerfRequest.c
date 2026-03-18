/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1401825B8
 * Callers:
 *     PoUserShutdownInitiated @ 0x140727960 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140728DE4 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x14078C8B0 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1408AB050 (PdcPoPerfOverride.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x1400D6518 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
