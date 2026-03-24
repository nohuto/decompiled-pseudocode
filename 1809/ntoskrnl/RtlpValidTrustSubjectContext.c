/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x14016CABC
 * Callers:
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1408955B0 (RtlpValidFilterAclSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400AD1A0 (RtlSidDominatesForTrust.c)
 */

char __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v4; // r11
  int v5; // eax
  char result; // al
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v4 = a4;
  if ( !a1 )
  {
    result = 0;
    goto LABEL_5;
  }
  v5 = RtlSidDominatesForTrust(a1, a2, &v7);
  *v4 = v5;
  result = v7;
  if ( !v7 )
LABEL_5:
    *v4 = -1073741790;
  return result;
}
