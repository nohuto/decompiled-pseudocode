/*
 * XREFs of NVMeDisableThrottling @ 0x1C00052F0
 * Callers:
 *     NVMeControllerRemove @ 0x1C000B4D4 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000B894 (NVMeControllerStop.c)
 * Callees:
 *     NVMeDeRegisterThrottling @ 0x1C00053B4 (NVMeDeRegisterThrottling.c)
 */

__int64 __fastcall NVMeDisableThrottling(__int64 a1)
{
  NVMeDeRegisterThrottling(a1, 0LL);
  NVMeDeRegisterThrottling(a1, 1LL);
  NVMeDeRegisterThrottling(a1, 2LL);
  NVMeDeRegisterThrottling(a1, 3LL);
  return NVMeDeRegisterThrottling(a1, 4LL);
}
