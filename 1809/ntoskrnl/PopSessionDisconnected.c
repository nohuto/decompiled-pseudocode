/*
 * XREFs of PopSessionDisconnected @ 0x1406E1F6C
 * Callers:
 *     PopSessionConnectionChange @ 0x14071D6A8 (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     PopDiagTraceSessionStates @ 0x1406DC770 (PopDiagTraceSessionStates.c)
 *     PopSetSessionUserStatus @ 0x1406DC9D8 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x14071D7F4 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( PopConsoleContext == a1 && a1 != -1 )
  {
    memset(&PopConsoleContext, 0, 0x28uLL);
    PopConsoleContext = -1;
    dword_14040FDC0 = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
