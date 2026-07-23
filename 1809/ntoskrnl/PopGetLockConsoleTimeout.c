/*
 * XREFs of PopGetLockConsoleTimeout @ 0x1406DE094
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x1406DD640 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x1406DD770 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x14087A03C (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140410E36 && PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
