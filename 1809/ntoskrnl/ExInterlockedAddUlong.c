/*
 * XREFs of ExInterlockedAddUlong @ 0x14015EF10
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14010C0BC (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14010C0F4 (ExpAcquireSpinLockDisabled.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall ExInterlockedAddUlong(PULONG Addend, ULONG Increment, PKSPIN_LOCK Lock)
{
  char v6; // al
  ULONG v7; // ebx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock, *(__int64 *)&Increment, (__int64)Lock);
  v7 = *Addend;
  *Addend += Increment;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v6);
  return v7;
}
