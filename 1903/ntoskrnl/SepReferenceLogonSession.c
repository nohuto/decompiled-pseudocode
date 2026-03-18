/*
 * XREFs of SepReferenceLogonSession @ 0x14061B720
 * Callers:
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x140087E4C (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x140139E20 (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x14061B754 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
