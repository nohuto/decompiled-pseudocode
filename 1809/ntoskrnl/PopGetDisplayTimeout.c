/*
 * XREFs of PopGetDisplayTimeout @ 0x1406DD770
 * Callers:
 *     PopRemoteSessionActiveInput @ 0x1406DD734 (PopRemoteSessionActiveInput.c)
 *     PopSessionInputChange @ 0x1406DD7A0 (PopSessionInputChange.c)
 *     PopCheckConsoleTimeouts @ 0x140879EF4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x1406DE094 (PopGetLockConsoleTimeout.c)
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
