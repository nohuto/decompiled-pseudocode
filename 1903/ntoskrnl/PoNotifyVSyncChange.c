/*
 * XREFs of PoNotifyVSyncChange @ 0x1400EDA70
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400EDAE4 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 */

__int64 __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
