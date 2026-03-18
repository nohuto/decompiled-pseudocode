/*
 * XREFs of SepReferenceLogonSession @ 0x1405BD6F4
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x14013A900 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x140176DF8 (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x1406494A0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x1405BD728 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
