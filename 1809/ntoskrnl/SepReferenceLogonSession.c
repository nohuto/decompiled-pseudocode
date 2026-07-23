/*
 * XREFs of SepReferenceLogonSession @ 0x1405BE6F4
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x14013AA20 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x140176F18 (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x1405BE728 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
