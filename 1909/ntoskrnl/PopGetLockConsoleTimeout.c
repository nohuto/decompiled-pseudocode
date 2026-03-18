/*
 * XREFs of PopGetLockConsoleTimeout @ 0x140726344
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x140725BF4 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x140725F90 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405B5554 (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140438796 && PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
