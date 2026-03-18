/*
 * XREFs of SeTokenIsRestricted @ 0x140086BB0
 * Callers:
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405BD718 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenCanImpersonate @ 0x1405DE8C0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x140619EC0 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x14061A1E0 (SeTokenIsAdmin.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14061A26C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x14061A5C0 (NtImpersonateAnonymousToken.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
