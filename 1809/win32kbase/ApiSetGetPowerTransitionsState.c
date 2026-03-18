/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C0094328
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMOnTimerNotification @ 0x1C010EF10 (RIMOnTimerNotification.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0128D14 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
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
