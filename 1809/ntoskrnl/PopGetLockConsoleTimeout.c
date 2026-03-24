/*
 * XREFs of PopGetLockConsoleTimeout @ 0x1406DCDF4
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x1406DC3A0 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x1406DC4D0 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x140878DDC (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_14040FDB6 && PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
