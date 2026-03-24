/*
 * XREFs of PopIsRunningInVm @ 0x1402D6DC0
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176BB0 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14017D710 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14017D750 (HviGetEnlightenmentInformation.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

bool PopIsRunningInVm()
{
  bool result; // al
  _QWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  result = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    HviGetHypervisorFeatures(v1);
    if ( (v1[0] & 0x100000000000LL) == 0 )
      return 1;
    HviGetEnlightenmentInformation(v1);
    if ( (v1[0] & 0x1000) != 0 )
      return 1;
  }
  return result;
}
