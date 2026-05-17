/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x18008C074
 * Callers:
 *     RtlpValidFilterAclSubjectContext @ 0x18000FB00 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x18007BBE0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x18000F520 (RtlSidDominatesForTrust.c)
 */

bool __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool result; // al
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v6 = 0;
  if ( !a1 || (*a4 = RtlSidDominatesForTrust(a1, a2, &v6), !(result = v6)) )
    *a4 = -1073741790;
  return result;
}
