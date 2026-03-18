/*
 * XREFs of PpmBeginHighPerfRequest @ 0x140181EC8
 * Callers:
 *     PoUserShutdownInitiated @ 0x140725AC0 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140727A74 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x14078A450 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1408AB7F0 (PdcPoPerfOverride.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x1400ECD64 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
