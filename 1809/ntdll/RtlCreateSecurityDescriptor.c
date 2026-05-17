/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x180045030
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180041770 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x180046140 (RtlCheckTokenCapability.c)
 *     RtlCheckSandboxedToken @ 0x180071FC0 (RtlCheckSandboxedToken.c)
 *     RtlCreateAndSetSD @ 0x180072450 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008CFA8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x18008F800 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlCreateSecurityDescriptor(_BYTE *a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 1 )
    return 3221225560LL;
  memset(a1, 0, 0x28uLL);
  result = 0LL;
  *a1 = 1;
  return result;
}
