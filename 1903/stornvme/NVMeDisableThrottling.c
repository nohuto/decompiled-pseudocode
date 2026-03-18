/*
 * XREFs of NVMeDisableThrottling @ 0x1C0004D90
 * Callers:
 *     NVMeControllerRemove @ 0x1C000B684 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000B984 (NVMeControllerStop.c)
 * Callees:
 *     NVMeDeRegisterThrottling @ 0x1C0004E54 (NVMeDeRegisterThrottling.c)
 */

__int64 __fastcall NVMeDisableThrottling(__int64 a1)
{
  NVMeDeRegisterThrottling(a1, 0LL);
  NVMeDeRegisterThrottling(a1, 1LL);
  NVMeDeRegisterThrottling(a1, 2LL);
  NVMeDeRegisterThrottling(a1, 3LL);
  return NVMeDeRegisterThrottling(a1, 4LL);
}
