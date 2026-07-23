/*
 * XREFs of SepSidInToken @ 0x140013310
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x140013054 (SepCheckForCriticalAceRemoval.c)
 *     SepTokenIsOwner @ 0x1400131F0 (SepTokenIsOwner.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x1400AACE0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB2B0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14015C2B4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14015C3D4 (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x1402FEA60 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x140325A98 (AuthzBasepMemberOf.c)
 *     SeTokenIsAdmin @ 0x1405BCCD0 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406AEBEC (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x1408A18F0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408A2220 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1400AAAA0 (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a5, a6, a7);
}
