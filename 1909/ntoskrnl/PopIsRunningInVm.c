/*
 * XREFs of PopIsRunningInVm @ 0x1402F1688
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140180DE0 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14018BF20 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14018BF60 (HviGetEnlightenmentInformation.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

bool PopIsRunningInVm()
{
  bool result; // al
  _QWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF

  v2[0] = 0LL;
  v2[1] = 0LL;
  result = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    v1[0] = 0LL;
    v1[1] = 0LL;
    HviGetHypervisorFeatures(v1);
    if ( (v1[0] & 0x100000000000LL) == 0 )
      return 1;
    HviGetEnlightenmentInformation(v2);
    if ( (v2[0] & 0x1000) != 0 )
      return 1;
  }
  return result;
}
