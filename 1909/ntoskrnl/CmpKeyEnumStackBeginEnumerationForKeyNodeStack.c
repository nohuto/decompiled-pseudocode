/*
 * XREFs of CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140837B18
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x140832F94 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140838530 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1408327FC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140837E7C (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140838268 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

_UNKNOWN **__fastcall CmpKeyEnumStackBeginEnumerationForKeyNodeStack(__int16 *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int64 *EntryAtLayerHeight; // rdi
  __int64 v7; // rdx
  __int64 v8; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *a1; i >= 0; --i )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a2, i);
    result = (_UNKNOWN **)CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    v7 = EntryAtLayerHeight[2];
    if ( v7 )
    {
      result = (_UNKNOWN **)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v7);
      if ( (_DWORD)result == 1 )
        break;
      CmpKeyEnumStackEntryBegin(v8, EntryAtLayerHeight);
      result = (_UNKNOWN **)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, EntryAtLayerHeight[2]);
      if ( (_DWORD)result )
        break;
    }
  }
  return result;
}
