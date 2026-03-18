/*
 * XREFs of PopIsInputSuppressionEngaged @ 0x1408AA9E4
 * Callers:
 *     PopMonitorInvocation @ 0x14071EDBC (PopMonitorInvocation.c)
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
    && dword_140443ACC == 1
    && !PopConsoleExternalDisplayConnected )
  {
    return PopConsoleDisplayState == 0;
  }
  return v1;
}
