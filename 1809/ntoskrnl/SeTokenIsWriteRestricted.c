/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140013380
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1405BA710 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x1405BAA30 (NtCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1405BCD54 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x140639100 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
