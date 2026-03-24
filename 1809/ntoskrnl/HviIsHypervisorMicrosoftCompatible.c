/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14017DBD0
 * Callers:
 *     HvlpTryConfigureInterface @ 0x14017C368 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x14017D710 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14017D750 (HviGetEnlightenmentInformation.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D784 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorVersion @ 0x140322410 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140322460 (HviGetImplementationLimits.c)
 *     ExGetVMType @ 0x1408CEACC (ExGetVMType.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x14017DC10 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface(v1);
  return v1[0] == 824407624;
}
