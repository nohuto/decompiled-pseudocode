/*
 * XREFs of PopIsInputSuppressionEngaged @ 0x14086DE9C
 * Callers:
 *     PopMonitorInvocation @ 0x1406DC1A8 (PopMonitorInvocation.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsInputSuppressionEngaged(int a1)
{
  char v1; // dl

  v1 = 0;
  if ( (unsigned int)(a1 - 31) <= 8
    && PopEnableInputSuppression
    && !PopErrataReportingIncorrectLidState
    && !PopLidOpened
    && dword_14041810C == 1
    && !PopConsoleExternalDisplayConnected )
  {
    return PopConsoleDisplayState == 0;
  }
  return v1;
}
