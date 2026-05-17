/*
 * XREFs of RtlFindAceByType @ 0x1800126F0
 * Callers:
 *     RtlpValidFilterAclSubjectContext @ 0x18000FB00 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCopyAces @ 0x18000FB7C (RtlpCopyAces.c)
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 *     RtlpGenerateInheritAcl @ 0x180011A90 (RtlpGenerateInheritAcl.c)
 *     RtlpSetSecurityObject @ 0x18007BBE0 (RtlpSetSecurityObject.c)
 *     RtlIsUntrustedObject @ 0x1800E4C70 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v4; // r9
  unsigned int v5; // r10d

  if ( !a1 )
    return 0LL;
  v4 = (unsigned __int8 *)(a1 + 8);
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( !a3 )
  {
    if ( *v4 == a2 )
      return v4;
LABEL_9:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v5 < *a3 || *v4 != a2 )
    goto LABEL_9;
  *a3 = v5;
  return v4;
}
