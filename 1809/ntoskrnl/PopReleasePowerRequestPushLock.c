/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x14058AA6C
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400027C4 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140002E88 (PoSetPowerRequestInternal.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14000327C (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x140141FA0 (PopPowerRequestNotifyAudioStateChanged.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
