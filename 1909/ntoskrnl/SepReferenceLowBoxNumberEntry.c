/*
 * XREFs of SepReferenceLowBoxNumberEntry @ 0x1408E26D4
 * Callers:
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepReferenceLowBoxNumberEntry(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
