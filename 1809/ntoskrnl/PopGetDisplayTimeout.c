/*
 * XREFs of PopGetDisplayTimeout @ 0x1406DC4D0
 * Callers:
 *     PopRemoteSessionActiveInput @ 0x1406DC494 (PopRemoteSessionActiveInput.c)
 *     PopSessionInputChange @ 0x1406DC500 (PopSessionInputChange.c)
 *     PopCheckConsoleTimeouts @ 0x140878C94 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x1406DCDF4 (PopGetLockConsoleTimeout.c)
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
