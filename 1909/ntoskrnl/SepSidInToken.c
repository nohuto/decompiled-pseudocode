/*
 * XREFs of SepSidInToken @ 0x140086EB8
 * Callers:
 *     SepTokenIsOwner @ 0x14000C730 (SepTokenIsOwner.c)
 *     SepMaximumAccessCheck @ 0x1400866E0 (SepMaximumAccessCheck.c)
 *     SepCheckForCriticalAceRemoval @ 0x14008D0B4 (SepCheckForCriticalAceRemoval.c)
 *     SepNormalAccessCheck @ 0x1400A7380 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140156D98 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140156EB8 (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x14031C4D0 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x140346BA0 (AuthzBasepMemberOf.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405BDAF8 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsAdmin @ 0x14061BCF0 (SeTokenIsAdmin.c)
 *     SeExamineSacl @ 0x1408DE870 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408DF1A0 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140086F04 (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a5, a6, a7);
}
