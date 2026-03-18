/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x1406D78C0
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406D75FC (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140729F9C (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x1408E25B8 (SepDeleteClaimAttributes.c)
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
