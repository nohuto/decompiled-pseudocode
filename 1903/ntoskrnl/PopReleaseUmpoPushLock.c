/*
 * XREFs of PopReleaseUmpoPushLock @ 0x14069FD0C
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400ECBB8 (PopUmpoSendPowerMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 */

void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}
