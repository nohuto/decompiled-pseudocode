/*
 * XREFs of PopSessionConnected @ 0x14071D74C
 * Callers:
 *     PopSessionConnectionChange @ 0x14071D6A8 (PopSessionConnectionChange.c)
 * Callees:
 *     PopConsoleSessionActiveInput @ 0x1406DC440 (PopConsoleSessionActiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x1406DC4B4 (PopRemoteSessionActiveInput.c)
 *     PopDiagTraceSessionStates @ 0x1406DC770 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x14071D7F4 (PopSetSessionDisplayStatus.c)
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
