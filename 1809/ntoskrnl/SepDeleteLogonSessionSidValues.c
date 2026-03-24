/*
 * XREFs of SepDeleteLogonSessionSidValues @ 0x1408A201C
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406B35E0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F71D8 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x1408A20D4 (SepDereferenceSidValuesBlock.c)
 */

__int64 __fastcall SepDeleteLogonSessionSidValues(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 120);
  if ( v2 )
  {
    result = SepDereferenceSidValuesBlock(v2);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
