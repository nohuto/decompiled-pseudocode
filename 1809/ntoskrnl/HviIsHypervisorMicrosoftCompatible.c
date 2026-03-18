/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14017DBB0
 * Callers:
 *     HvlpTryConfigureInterface @ 0x14017C348 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x14017D6F0 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14017D730 (HviGetEnlightenmentInformation.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D764 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorVersion @ 0x140322310 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140322360 (HviGetImplementationLimits.c)
 *     ExGetVMType @ 0x1408CEAEC (ExGetVMType.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x14017DBF0 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface(v1);
  return v1[0] == 824407624;
}
