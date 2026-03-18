/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140013380
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1405B9710 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x1405B9A30 (NtCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1405BBD54 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x1406380E0 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
