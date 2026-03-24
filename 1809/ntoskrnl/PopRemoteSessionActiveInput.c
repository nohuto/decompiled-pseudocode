/*
 * XREFs of PopRemoteSessionActiveInput @ 0x1406DC494
 * Callers:
 *     PopConsoleSessionActiveInput @ 0x1406DC420 (PopConsoleSessionActiveInput.c)
 *     PopSessionInputChange @ 0x1406DC500 (PopSessionInputChange.c)
 *     PopSessionConnected @ 0x14071D72C (PopSessionConnected.c)
 * Callees:
 *     PopGetDisplayTimeout @ 0x1406DC4D0 (PopGetDisplayTimeout.c)
 *     PopSetSessionUserStatus @ 0x1406DC9B8 (PopSetSessionUserStatus.c)
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
