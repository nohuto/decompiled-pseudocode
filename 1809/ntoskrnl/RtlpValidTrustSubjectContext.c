/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x14016CBBC
 * Callers:
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140896810 (RtlpValidFilterAclSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400AD0E0 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall RtlpValidTrustSubjectContext(void *a1, void *a2, __int64 a3, NTSTATUS *a4)
{
  NTSTATUS *v4; // r11
  NTSTATUS v5; // eax
  BOOLEAN result; // al
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  DominatesTrust = 0;
  v4 = a4;
  if ( !a1 )
  {
    result = 0;
    goto LABEL_5;
  }
  v5 = RtlSidDominatesForTrust(a1, a2, &DominatesTrust);
  *v4 = v5;
  result = DominatesTrust;
  if ( !DominatesTrust )
LABEL_5:
    *v4 = -1073741790;
  return result;
}
