/*
 * XREFs of CmpKeyEnumStackAdvance @ 0x1408000AC
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1407F0F80 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FB7AC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1407FFFDC (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1408065F0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407FB0AC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140800140 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140800A68 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvance(__int16 *a1)
{
  __int64 result; // rax
  __int16 v3; // r8
  __int64 EntryAtLayerHeight; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int16 v8; // r8
  __int64 *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx

  for ( result = ((__int64 (*)(void))CmpKeyEnumStackAdvanceInternal)();
        (int)result >= 0;
        result = CmpKeyEnumStackAdvanceInternal(a1) )
  {
    v3 = *a1;
    if ( *a1 >= 0 )
    {
      while ( 1 )
      {
        EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)(a1 + 4), v3);
        v7 = (__int64 *)CmpKeyEnumStackGetEntryAtLayerHeight(a1, v5, v6, EntryAtLayerHeight);
        v10 = v9[2];
        if ( v10 )
          break;
        v11 = v7[1];
        if ( (!v11 || !(unsigned int)CmpGetEffectiveKeyNodeSemantics(*v7, v11)) && v8 != a1[1] )
        {
          v3 = v8 - 1;
          if ( v3 >= 0 )
            continue;
        }
        goto LABEL_11;
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v9, v10) != 1 )
        return 0LL;
    }
LABEL_11:
    ;
  }
  return result;
}
