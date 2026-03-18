/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14018C180
 * Callers:
 *     HviGetHypervisorFeatures @ 0x14018BF20 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14018BF60 (HviGetEnlightenmentInformation.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14018BF94 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x14019CD08 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorVersion @ 0x1403438B0 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140343900 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x140343944 (HviGetIptFeatures.c)
 *     ExGetVMType @ 0x14090BB1C (ExGetVMType.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x14018C1D0 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _QWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  v1[0] = 0LL;
  v1[1] = 0LL;
  HviGetHypervisorInterface(v1);
  return LODWORD(v1[0]) == 824407624;
}
