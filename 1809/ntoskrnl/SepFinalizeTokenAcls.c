/*
 * XREFs of SepFinalizeTokenAcls @ 0x140582ABC
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405828D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeCopyClientToken @ 0x140649E94 (SeCopyClientToken.c)
 *     NtDuplicateToken @ 0x14064A030 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x14064EA6C (SeSubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x140654F90 (NtCreateLowBoxToken.c)
 *     NtFilterToken @ 0x1406C6B80 (NtFilterToken.c)
 *     SeFilterToken @ 0x140757A90 (SeFilterToken.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D70 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C9190 (SepAppendAceToTokenObjectAcl.c)
 */

__int64 __fastcall SepFinalizeTokenAcls(_QWORD *a1)
{
  __int64 result; // rax

  result = SepAppendAceToTokenObjectAcl(a1, 8LL, SeAliasAdminsSid);
  if ( (int)result >= 0 )
    return SepSetProcessTrustLabelAceForToken(a1);
  return result;
}
