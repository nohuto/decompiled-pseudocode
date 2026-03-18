/*
 * XREFs of PopGetLockConsoleTimeout @ 0x1407244A4
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x140723D54 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x1407240F0 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405B5174 (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140438816 && PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
