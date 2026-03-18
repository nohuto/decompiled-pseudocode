/*
 * XREFs of PopSessionDisconnected @ 0x14072A91C
 * Callers:
 *     PopSessionConnectionChange @ 0x1407487A8 (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopDiagTraceSessionStates @ 0x1406F0CFC (PopDiagTraceSessionStates.c)
 *     PopSetSessionUserStatus @ 0x140725FC0 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x14073CED8 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( PopConsoleContext == a1 && a1 != -1 )
  {
    memset(&PopConsoleContext, 0, 0x28uLL);
    PopConsoleContext = -1;
    dword_1404387A0 = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
