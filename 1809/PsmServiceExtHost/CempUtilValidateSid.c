/*
 * XREFs of CempUtilValidateSid @ 0x180015540
 * Callers:
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180001724 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x1800154EC (-HampAppInfoValidate@@YAJPEBGPEAEKK@Z.c)
 *     CempUtilValidateAndCaptureSid @ 0x1800710D4 (CempUtilValidateAndCaptureSid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempUtilValidateSid(PSID Sid, unsigned int a2)
{
  unsigned int v4; // ebx

  if ( a2 < 0xC )
  {
    return (unsigned int)-1073741584;
  }
  else
  {
    v4 = 0;
    if ( !RtlValidSid(Sid) || RtlLengthSid(Sid) != a2 )
      return (unsigned int)-1073741585;
  }
  return v4;
}
