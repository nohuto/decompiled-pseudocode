/*
 * XREFs of ExGetVMType @ 0x14090C0BC
 * Callers:
 *     ExpGetVMActivationStatus @ 0x14072ADC0 (ExpGetVMActivationStatus.c)
 *     ExpIsRunningInWDAGContainer @ 0x14090C9F0 (ExpIsRunningInWDAGContainer.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401806F0 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14018B590 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14018B5D0 (HviGetEnlightenmentInformation.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14018B7F0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall ExGetVMType(_DWORD *a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF

  *a1 = 0;
  v4[0] = 0LL;
  v4[1] = 0LL;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( HviIsHypervisorMicrosoftCompatible() )
    {
      v3[0] = 0LL;
      v3[1] = 0LL;
      HviGetHypervisorFeatures(v3);
      if ( (v3[0] & 0x100000000000LL) == 0 || (HviGetEnlightenmentInformation(v4), (v4[0] & 0x1000) != 0) )
        *a1 = 1;
    }
    else
    {
      *a1 = 2;
    }
  }
  return 0LL;
}
