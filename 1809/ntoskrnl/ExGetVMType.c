/*
 * XREFs of ExGetVMType @ 0x1408CFD8C
 * Callers:
 *     ExpGetVMActivationStatus @ 0x140705308 (ExpGetVMActivationStatus.c)
 *     ExpIsRunningInWDAGContainer @ 0x1408D0530 (ExpIsRunningInWDAGContainer.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176CB0 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14017D850 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14017D890 (HviGetEnlightenmentInformation.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14017DD10 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall ExGetVMType(_DWORD *a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( HviIsHypervisorMicrosoftCompatible() )
    {
      HviGetHypervisorFeatures(v3);
      if ( (v3[0] & 0x100000000000LL) == 0 || (HviGetEnlightenmentInformation(v3), (v3[0] & 0x1000) != 0) )
        *a1 = 1;
    }
    else
    {
      *a1 = 2;
    }
  }
  return 0LL;
}
