/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140086BD0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1405DE8C0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x140619EC0 (NtCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14061A26C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x14061A5C0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
