/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14017DD10
 * Callers:
 *     HvlpTryConfigureInterface @ 0x14017C468 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x14017D850 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14017D890 (HviGetEnlightenmentInformation.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D8C4 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorVersion @ 0x140322600 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140322650 (HviGetImplementationLimits.c)
 *     ExGetVMType @ 0x1408CFD8C (ExGetVMType.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x14017DD50 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface(v1);
  return v1[0] == 824407624;
}
