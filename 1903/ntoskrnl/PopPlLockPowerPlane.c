/*
 * XREFs of PopPlLockPowerPlane @ 0x1403050B0
 * Callers:
 *     PopFxUnregisterDevice @ 0x14076EA3C (PopFxUnregisterDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PopPlLockPowerPlane(__int64 a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  *(_BYTE *)(a1 + 24) = result;
  return result;
}
