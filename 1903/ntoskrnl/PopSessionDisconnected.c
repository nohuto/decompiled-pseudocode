/*
 * XREFs of PopSessionDisconnected @ 0x1407295AC
 * Callers:
 *     PopSessionConnectionChange @ 0x1407468A8 (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopDiagTraceSessionStates @ 0x1406EF03C (PopDiagTraceSessionStates.c)
 *     PopSetSessionUserStatus @ 0x140724120 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x14073AF78 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( PopConsoleContext == a1 && a1 != -1 )
  {
    memset(&PopConsoleContext, 0, 0x28uLL);
    PopConsoleContext = -1;
    dword_140438820 = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
