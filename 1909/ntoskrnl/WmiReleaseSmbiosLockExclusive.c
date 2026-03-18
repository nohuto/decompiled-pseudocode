/*
 * XREFs of WmiReleaseSmbiosLockExclusive @ 0x140727174
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *WmiReleaseSmbiosLockExclusive()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
