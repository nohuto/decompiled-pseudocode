/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1402EE360
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402F2F00 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x1402F9654 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402FA948 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 *     PpmEnableCoordinatedIdleStates @ 0x1408A2450 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetDeepSleepPlatformStateIndex()
{
  if ( PpmPlatformStates && *(_DWORD *)PpmPlatformStates )
    return (unsigned int)(*(_DWORD *)PpmPlatformStates - 1);
  else
    return 0xFFFFFFFFLL;
}
