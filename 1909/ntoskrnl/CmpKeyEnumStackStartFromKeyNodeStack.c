/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x140838530
 * Callers:
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14083784C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140838490 (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140837B18 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackStart @ 0x1408383E0 (CmpKeyEnumStackStart.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKeyNodeStack(
        __int16 *a1,
        __int16 *a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 result; // rax

  result = CmpKeyEnumStackStart((__int64)a1, *a2, a3, a4);
  if ( (int)result >= 0 )
  {
    CmpKeyEnumStackBeginEnumerationForKeyNodeStack(a1, (__int64)a2);
    return 0LL;
  }
  return result;
}
