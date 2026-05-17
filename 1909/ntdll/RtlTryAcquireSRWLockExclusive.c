/*
 * XREFs of RtlTryAcquireSRWLockExclusive @ 0x1800818D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlTryAcquireSRWLockExclusive(volatile signed __int32 *a1)
{
  return !_interlockedbittestandset64(a1, 0LL);
}
