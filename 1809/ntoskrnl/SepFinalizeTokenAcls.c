/*
 * XREFs of SepFinalizeTokenAcls @ 0x140583ABC
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405838D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeCopyClientToken @ 0x14064B034 (SeCopyClientToken.c)
 *     NtDuplicateToken @ 0x14064B1D0 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     NtFilterToken @ 0x1406C7E00 (NtFilterToken.c)
 *     SeFilterToken @ 0x140758C60 (SeFilterToken.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6EF8 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405CA190 (SepAppendAceToTokenObjectAcl.c)
 */

__int64 __fastcall SepFinalizeTokenAcls(_QWORD *a1)
{
  __int64 result; // rax

  result = SepAppendAceToTokenObjectAcl(a1, 8LL, SeAliasAdminsSid);
  if ( (int)result >= 0 )
    return SepSetProcessTrustLabelAceForToken(a1);
  return result;
}
