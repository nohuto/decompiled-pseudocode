/*
 * XREFs of CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1407FF0C0
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FA5AC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x1407FFB30 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407F9EAC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FA018 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryBegin @ 0x1407FF484 (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1407FF868 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

_UNKNOWN **__fastcall CmpKeyEnumStackBeginEnumerationForKeyNodeStack(__int16 *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // esi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *a1; i >= 0; --i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a2, i);
    result = (_UNKNOWN **)CmpKeyEnumStackGetEntryAtLayerHeight(a1, v7, v8, EntryAtLayerHeight);
    v10 = v9[2];
    if ( v10 )
    {
      result = (_UNKNOWN **)CmpGetEffectiveKeyNodeSemantics(*v9, v10);
      v13 = (int)result;
      if ( (_DWORD)result == 1 )
        break;
      result = (_UNKNOWN **)CmpKeyEnumStackEntryBegin(v12, v11);
      if ( (v13 & 0xFFFFFFFD) != 0 )
        break;
    }
  }
  return result;
}
