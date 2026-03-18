/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x14069FCA8
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400EC750 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PoClearPowerRequestInternal @ 0x1400EC820 (PoClearPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 *     PoSetPowerRequestInternal @ 0x1400ECD64 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14015C974 (PopPowerRequestNotifyAudioStateChanged.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
