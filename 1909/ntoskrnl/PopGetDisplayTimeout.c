/*
 * XREFs of PopGetDisplayTimeout @ 0x140725F90
 * Callers:
 *     PopSessionInputChange @ 0x140725AC4 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x140725F54 (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x1408B57E4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x140726344 (PopGetLockConsoleTimeout.c)
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
