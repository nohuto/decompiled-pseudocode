/*
 * XREFs of NVMeEnableThrottling @ 0x1C0005340
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeRegisterThrottling @ 0x1C00054A0 (NVMeRegisterThrottling.c)
 */

__int64 __fastcall NVMeEnableThrottling(__int64 a1)
{
  NVMeRegisterThrottling(a1, 0LL, *(unsigned int *)(a1 + 128));
  NVMeRegisterThrottling(a1, 1LL, *(unsigned int *)(a1 + 128));
  NVMeRegisterThrottling(a1, 2LL, *(unsigned int *)(a1 + 128));
  NVMeRegisterThrottling(a1, 3LL, *(unsigned int *)(a1 + 128));
  return NVMeRegisterThrottling(a1, 4LL, *(unsigned int *)(a1 + 128));
}
