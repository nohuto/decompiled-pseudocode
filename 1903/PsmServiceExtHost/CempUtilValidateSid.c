/*
 * XREFs of CempUtilValidateSid @ 0x180011044
 * Callers:
 *     CempUtilValidateAndCaptureSid @ 0x180002E98 (CempUtilValidateAndCaptureSid.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180010690 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x180010FF0 (-HampAppInfoValidate@@YAJPEBGPEAEKK@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x18007EB68 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
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
