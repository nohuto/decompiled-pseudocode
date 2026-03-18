/*
 * XREFs of PopGetDisplayTimeout @ 0x1407240F0
 * Callers:
 *     PopSessionInputChange @ 0x140723C24 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x1407240B4 (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x1408B5F14 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x1407244A4 (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopGetDisplayTimeout(int a1)
{
  __int64 result; // rax

  if ( PopConsoleContext != a1 || a1 == -1 )
    return 0LL;
  result = PopGetLockConsoleTimeout();
  if ( !(_DWORD)result )
    return (unsigned int)PopDisplayTimeout;
  return result;
}
