/*
 * XREFs of SepSidInToken @ 0x140013310
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x140013054 (SepCheckForCriticalAceRemoval.c)
 *     SepTokenIsOwner @ 0x1400131F0 (SepTokenIsOwner.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9450 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x1400AAD80 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB350 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14015C194 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14015C2B4 (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x1402FE770 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x1403257A8 (AuthzBasepMemberOf.c)
 *     SeTokenIsAdmin @ 0x1405BBCD0 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406AD96C (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x1408A06B0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408A0FE0 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1400AAB40 (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((a5 != 0 ? 504LL : 232LL) + a1, a2, a3, a4, a5, a6, a7);
}
