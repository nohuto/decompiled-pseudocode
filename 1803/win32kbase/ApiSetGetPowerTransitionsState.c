/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C0140A4C
 * Callers:
 *     RIMOnTimerNotification @ 0x1C00E3E60 (RIMOnTimerNotification.c)
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0100724 (rimApplyPointerDevicePolicies.c)
 *     rimReportHidKeyboardInputData @ 0x1C0104420 (rimReportHidKeyboardInputData.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall ApiSetGetPowerTransitionsState(void *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x3CuLL);
  result = IsGetPowerTransitionsStateSupported();
  if ( (int)result >= 0 )
    return GetPowerTransitionsState(a1);
  return result;
}
