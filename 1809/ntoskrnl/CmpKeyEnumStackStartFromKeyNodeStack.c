/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x1407FFB50
 * Callers:
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1407FEDFC (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1407FFAB0 (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1407FF0E0 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackStart @ 0x1407FFA00 (CmpKeyEnumStackStart.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKeyNodeStack(__int16 *a1, __int16 *a2)
{
  __int64 result; // rax

  result = CmpKeyEnumStackStart((__int64)a1, *a2);
  if ( (int)result >= 0 )
  {
    CmpKeyEnumStackBeginEnumerationForKeyNodeStack(a1, (__int64)a2);
    return 0LL;
  }
  return result;
}
