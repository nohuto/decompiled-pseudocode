/*
 * XREFs of PopRemoteSessionActiveInput @ 0x140725F54
 * Callers:
 *     PopSessionInputChange @ 0x140725AC4 (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x140725C70 (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x14074884C (PopSessionConnected.c)
 * Callees:
 *     PopGetDisplayTimeout @ 0x140725F90 (PopGetDisplayTimeout.c)
 *     PopSetSessionUserStatus @ 0x140725FC0 (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopRemoteSessionActiveInput(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = a1;
  PopSetSessionUserStatus(a1, 0LL);
  a3[1] = PopGetDisplayTimeout(v4);
  result = (unsigned int)PopInputTimeout;
  *a3 = PopInputTimeout;
  return result;
}
