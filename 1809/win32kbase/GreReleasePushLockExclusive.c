/*
 * XREFs of GreReleasePushLockExclusive @ 0x1C008CC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreReleasePushLockExclusive(__int64 a1)
{
  return ExReleasePushLockExclusiveEx(a1, 0LL);
}
