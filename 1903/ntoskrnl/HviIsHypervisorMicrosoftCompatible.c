/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14018B7F0
 * Callers:
 *     HviGetHypervisorFeatures @ 0x14018B590 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14018B5D0 (HviGetEnlightenmentInformation.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14018B604 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x14019C588 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorVersion @ 0x140343E50 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140343EA0 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x140343EE4 (HviGetIptFeatures.c)
 *     ExGetVMType @ 0x14090C0BC (ExGetVMType.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x14018B840 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _QWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  v1[0] = 0LL;
  v1[1] = 0LL;
  HviGetHypervisorInterface(v1);
  return LODWORD(v1[0]) == 824407624;
}
