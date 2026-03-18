/*
 * XREFs of PopIsInputSuppressionEngaged @ 0x1408AA244
 * Callers:
 *     PopMonitorInvocation @ 0x140720C4C (PopMonitorInvocation.c)
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
    && dword_140443A2C == 1
    && !PopConsoleExternalDisplayConnected )
  {
    return PopConsoleDisplayState == 0;
  }
  return v1;
}
