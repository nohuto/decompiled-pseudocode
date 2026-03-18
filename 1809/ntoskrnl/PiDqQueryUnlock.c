/*
 * XREFs of PiDqQueryUnlock @ 0x14082B224
 * Callers:
 *     PiDqIrpCancel @ 0x140288DB0 (PiDqIrpCancel.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *__fastcall PiDqQueryUnlock(__int64 a1)
{
  ExReleasePushLockEx(a1 + 64, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
