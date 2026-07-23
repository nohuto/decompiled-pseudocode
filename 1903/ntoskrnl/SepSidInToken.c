/*
 * XREFs of SepSidInToken @ 0x140086A98
 * Callers:
 *     SepTokenIsOwner @ 0x14000C6A0 (SepTokenIsOwner.c)
 *     SepMaximumAccessCheck @ 0x1400862C0 (SepMaximumAccessCheck.c)
 *     SepCheckForCriticalAceRemoval @ 0x14008BDB4 (SepCheckForCriticalAceRemoval.c)
 *     SepNormalAccessCheck @ 0x1400C7500 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1401566F8 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140156818 (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x14031CA80 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x140347140 (AuthzBasepMemberOf.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405BD718 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsAdmin @ 0x14061A1E0 (SeTokenIsAdmin.c)
 *     SeExamineSacl @ 0x1408DEF70 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408DF8A0 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140086AE4 (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a5, a6, a7);
}
