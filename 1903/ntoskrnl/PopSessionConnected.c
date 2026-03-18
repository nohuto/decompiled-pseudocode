/*
 * XREFs of PopSessionConnected @ 0x14074694C
 * Callers:
 *     PopSessionConnectionChange @ 0x1407468A8 (PopSessionConnectionChange.c)
 * Callees:
 *     PopDiagTraceSessionStates @ 0x1406EF03C (PopDiagTraceSessionStates.c)
 *     PopConsoleSessionActiveInput @ 0x140723DD0 (PopConsoleSessionActiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x1407240B4 (PopRemoteSessionActiveInput.c)
 *     PopSetSessionDisplayStatus @ 0x14073AF78 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, unsigned __int8 a2, int *a3)
{
  __int64 v7; // rdx

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED, a1, a2);
  if ( a2 )
  {
    PopConsoleSession = 1;
    PopSetSessionDisplayStatus(a1, 1, 0);
    PopConsoleContext = a1;
    return PopConsoleSessionActiveInput(
             a1,
             (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
             a3);
  }
  else
  {
    PopSetSessionDisplayStatus(a1, 1, 0);
    return PopRemoteSessionActiveInput(a1, v7, a3);
  }
}
