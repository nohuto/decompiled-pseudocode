/*
 * XREFs of PopSessionConnected @ 0x14071E9CC
 * Callers:
 *     PopSessionConnectionChange @ 0x14071E928 (PopSessionConnectionChange.c)
 * Callees:
 *     PopConsoleSessionActiveInput @ 0x1406DD6C0 (PopConsoleSessionActiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x1406DD734 (PopRemoteSessionActiveInput.c)
 *     PopDiagTraceSessionStates @ 0x1406DD9F0 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x14071EA74 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, unsigned __int8 a2, int *a3)
{
  __int64 v7; // rdx

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED, a1, a2);
  if ( a2 )
  {
    PopConsoleSession = 1;
    PopSetSessionDisplayStatus(a1, 1LL, 0LL);
    PopConsoleContext = a1;
    return PopConsoleSessionActiveInput(
             a1,
             (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
             a3);
  }
  else
  {
    PopSetSessionDisplayStatus(a1, 1LL, 0LL);
    return PopRemoteSessionActiveInput(a1, v7, a3);
  }
}
