/*
 * XREFs of RtlCreateAcl @ 0x180011A50
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001E70 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     RtlpCombineAcls @ 0x18000F5AC (RtlpCombineAcls.c)
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18001167C (RtlpInheritAcl2.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlCreateAndSetSD @ 0x180068930 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180086F48 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpComputeMergedAcl2 @ 0x180088F48 (RtlpComputeMergedAcl2.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53E0 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800E6188 (RtlpCreateServerAcl.c)
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
