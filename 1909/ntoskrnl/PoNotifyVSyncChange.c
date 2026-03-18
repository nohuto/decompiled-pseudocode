/*
 * XREFs of PoNotifyVSyncChange @ 0x1400F0930
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400F09A4 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 */

__int64 __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
