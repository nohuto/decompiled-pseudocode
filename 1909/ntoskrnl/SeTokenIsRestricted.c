/*
 * XREFs of SeTokenIsRestricted @ 0x140086FD0
 * Callers:
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405BDAF8 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenCanImpersonate @ 0x1405DF060 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x14061B9D0 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x14061BCF0 (SeTokenIsAdmin.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14061BD7C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
