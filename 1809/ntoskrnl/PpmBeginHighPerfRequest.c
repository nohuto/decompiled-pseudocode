/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1401785A0
 * Callers:
 *     PoUserShutdownInitiated @ 0x1406DE500 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x1406E0AC4 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x140763A70 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x14086ECC0 (PdcPoPerfOverride.c)
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
