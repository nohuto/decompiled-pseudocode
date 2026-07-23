/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1401786C0
 * Callers:
 *     PoUserShutdownInitiated @ 0x1406DF780 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x1406DFAF0 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x1406E1D44 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x140764C40 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x14086FF00 (PdcPoPerfOverride.c)
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
