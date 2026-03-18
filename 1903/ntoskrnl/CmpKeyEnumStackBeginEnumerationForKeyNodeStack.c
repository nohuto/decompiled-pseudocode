/*
 * XREFs of CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1408384B8
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x140833934 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140838ED0 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14083319C (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140833358 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryBegin @ 0x14083881C (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140838C08 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
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
