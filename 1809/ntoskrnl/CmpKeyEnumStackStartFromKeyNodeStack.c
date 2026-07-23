/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x140800D30
 * Callers:
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1407FFFDC (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140800C90 (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1408002C0 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackStart @ 0x140800BE0 (CmpKeyEnumStackStart.c)
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
