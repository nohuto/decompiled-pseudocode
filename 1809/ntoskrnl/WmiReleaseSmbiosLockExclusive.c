/*
 * XREFs of WmiReleaseSmbiosLockExclusive @ 0x1406DDD74
 * Callers:
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *WmiReleaseSmbiosLockExclusive()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
