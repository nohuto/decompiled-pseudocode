/*
 * XREFs of ExInterlockedAddUlong @ 0x140158B10
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14010A354 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14010A4D0 (ExpAcquireSpinLockDisabled.c)
 */

ULONG __stdcall ExInterlockedAddUlong(PULONG Addend, ULONG Increment, PKSPIN_LOCK Lock)
{
  char v6; // al
  ULONG v7; // ebx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  v7 = *Addend;
  *Addend += Increment;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v6);
  return v7;
}
