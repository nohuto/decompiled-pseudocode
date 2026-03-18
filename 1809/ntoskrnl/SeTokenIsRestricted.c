/*
 * XREFs of SeTokenIsRestricted @ 0x140013360
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1405B9710 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x1405B9A30 (NtCompareTokens.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeTokenIsAdmin @ 0x1405BBCD0 (SeTokenIsAdmin.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1405BBD54 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x1406380E0 (SeTokenCanImpersonate.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406AD96C (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
