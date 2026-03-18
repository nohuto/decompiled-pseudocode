/*
 * XREFs of PopGetLockConsoleTimeout @ 0x1406DCE14
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x1406DC3C0 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x1406DC4F0 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x140878DFC (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_14040FDB6 && PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
