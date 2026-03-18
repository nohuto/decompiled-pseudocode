/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x14031CE80
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14010C01C (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14010C054 (ExpAcquireSpinLockDisabled.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  char v6; // al
  LARGE_INTEGER v7; // rbx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock, Increment.QuadPart, (__int64)Lock);
  v7 = *Addend;
  Addend->QuadPart += Increment.QuadPart;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v6);
  return v7;
}
