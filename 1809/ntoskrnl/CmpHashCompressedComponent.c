/*
 * XREFs of CmpHashCompressedComponent @ 0x1406F967C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1406F947C (CmpFindSubkeyInHashByChildCell.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FB7AC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x1408065F0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpHashCompressedComponent(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // ebx
  int i; // esi
  WCHAR v5; // ax

  v2 = 0;
  for ( i = a2; i; --i )
  {
    v5 = *a1;
    if ( (unsigned __int8)v5 >= 0x61u )
    {
      if ( (unsigned __int8)v5 <= 0x7Au )
        v5 -= 32;
      else
        v5 = RtlUpcaseUnicodeChar(*a1);
    }
    ++a1;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
