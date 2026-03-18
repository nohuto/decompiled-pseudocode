/*
 * XREFs of SeTokenIsAdmin @ 0x14061BCF0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140085D88 (SepMandatorySubProcessToken.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405E7AFC (PspDisablePrimaryTokenExchange.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14061BC88 (MiIsUserQueryVmCallerTrusted.c)
 *     PspIsContextAdmin @ 0x14061BFC4 (PspIsContextAdmin.c)
 *     EtwpCoverageUserIsAdmin @ 0x1408F31B4 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x140086EB8 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x140086FD0 (SeTokenIsRestricted.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  PSID v2; // rsi
  BOOLEAN v3; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SeAliasAdminsSid;
  v3 = SepSidInToken((__int64)Token, 0LL, (__int64)SeAliasAdminsSid, 0LL, 0, 0, 0);
  if ( v3 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, (__int64)v2, 0LL, 1, 0, 0);
  }
  return v3;
}
