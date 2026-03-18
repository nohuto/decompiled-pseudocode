/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x1406B38C8
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406B3600 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F71F8 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x1408A3EB8 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepDeleteLogonSessionClaims(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    result = SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  return result;
}
