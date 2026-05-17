/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x180089098
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x180045530 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x18007C610 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x180045F30 (RtlSidDominatesForTrust.c)
 */

bool __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool result; // al
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( !a1 )
  {
    result = 0;
    goto LABEL_5;
  }
  *a4 = RtlSidDominatesForTrust(a1, a2, &v6);
  result = v6;
  if ( !v6 )
LABEL_5:
    *a4 = -1073741790;
  return result;
}
