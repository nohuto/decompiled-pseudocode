/*
 * XREFs of CmpHashCompressedComponent @ 0x1407133F0
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407131F4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140833934 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x14083EBC0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
 */

__int64 __fastcall CmpHashCompressedComponent(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r11d
  unsigned __int8 *i; // r10
  unsigned __int16 v5; // ax

  v2 = 0;
  v3 = a2;
  for ( i = a1; v3; --v3 )
  {
    v5 = *i;
    if ( (unsigned __int8)v5 >= 0x61u )
    {
      if ( (unsigned __int8)v5 <= 0x7Au )
        v5 -= 32;
      else
        v5 = NLS_UPCASE(*i);
    }
    ++i;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
