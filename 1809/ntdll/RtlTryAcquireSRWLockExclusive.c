/*
 * XREFs of RtlTryAcquireSRWLockExclusive @ 0x180087D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlTryAcquireSRWLockExclusive(volatile signed __int32 *a1)
{
  return !_interlockedbittestandset64(a1, 0LL);
}
