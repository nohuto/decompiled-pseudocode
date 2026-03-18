/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x1406721B4
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 *     PoSetPowerRequestInternal @ 0x1400D6518 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x1400D6A84 (PoClearPowerRequestInternal.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400D88B0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14015D014 (PopPowerRequestNotifyAudioStateChanged.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
