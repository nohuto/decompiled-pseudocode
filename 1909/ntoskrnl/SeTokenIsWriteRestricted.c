/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140086FF0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1405DF060 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x14061B9D0 (NtCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14061BD7C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
