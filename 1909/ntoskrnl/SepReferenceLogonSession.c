/*
 * XREFs of SepReferenceLogonSession @ 0x14061D230
 * Callers:
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x14008826C (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x140088534 (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x14061D264 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
