/*
 * XREFs of SepAppendAdminAceToTokenAcl @ 0x1405D779C
 * Callers:
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     NtDuplicateToken @ 0x1405D77E0 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x140618F30 (SeSubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 * Callees:
 *     SepAppendAceToTokenObjectAcl @ 0x1405C6DC0 (SepAppendAceToTokenObjectAcl.c)
 */

__int64 __fastcall SepAppendAdminAceToTokenAcl(__int64 a1)
{
  return SepAppendAceToTokenObjectAcl(a1, 8u, SeAliasAdminsSid);
}
