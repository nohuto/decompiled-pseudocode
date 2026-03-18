/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x1406D76A0
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406D73DC (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14072BE34 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x1408E1EB8 (SepDeleteClaimAttributes.c)
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
