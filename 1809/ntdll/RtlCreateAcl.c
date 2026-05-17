/*
 * XREFs of RtlCreateAcl @ 0x180044270
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002040 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenMembershipEx @ 0x180041770 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x180043E9C (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x1800455AC (RtlpCombineAcls.c)
 *     RtlCheckTokenCapability @ 0x180046140 (RtlCheckTokenCapability.c)
 *     RtlCheckSandboxedToken @ 0x180071FC0 (RtlCheckSandboxedToken.c)
 *     RtlCreateAndSetSD @ 0x180072450 (RtlCreateAndSetSD.c)
 *     RtlpComputeMergedAcl2 @ 0x18008B87C (RtlpComputeMergedAcl2.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008CFA8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7FE8 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800E8D94 (RtlpCreateServerAcl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAcl(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a2 < 8 )
    return 3221225507LL;
  if ( (unsigned int)(a3 - 2) > 2 || a2 > 0xFFFC )
    return 3221225485LL;
  result = 0LL;
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = 0;
  *(_WORD *)(a1 + 2) = a2 & 0xFFFC;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
