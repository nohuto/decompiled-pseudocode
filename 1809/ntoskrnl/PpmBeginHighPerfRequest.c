/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1401785C0
 * Callers:
 *     PoUserShutdownInitiated @ 0x1406DE4E0 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x1406DE850 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x1406E0AA4 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x140763A50 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x14086ECA0 (PdcPoPerfOverride.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x140002E88 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
