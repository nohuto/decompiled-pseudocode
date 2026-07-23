/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1402D410C
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402D8200 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x1402DD5E0 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402DE200 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x14058AE14 (PopCheckResiliencyScenarios.c)
 *     PpmEnableCoordinatedIdleStates @ 0x140867968 (PpmEnableCoordinatedIdleStates.c)
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
