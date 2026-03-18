/*
 * XREFs of CmpSubtreeEnumeratorAdvance @ 0x140832F94
 * Callers:
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14082DA34 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14083E9A4 (CmpPromoteSubtree.c)
 * Callees:
 *     CmpPopulateKcbStack @ 0x1405FE060 (CmpPopulateKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140600710 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindKcbInHashEntryByName @ 0x140667A54 (CmpFindKcbInHashEntryByName.c)
 *     CmpHashUnicodeComponent @ 0x1406C533C (CmpHashUnicodeComponent.c)
 *     CmpHashCompressedComponent @ 0x1407151D0 (CmpHashCompressedComponent.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x14082AA30 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackAdvance @ 0x14083792C (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140837B18 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackReset @ 0x140838380 (CmpKeyEnumStackReset.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorAdvance(__int64 a1)
{
  __int16 v2; // cx
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 KcbInHashEntryByName; // rax
  __int16 v8; // dx
  __int64 KcbAtLayerHeight; // r14
  __int64 v10; // r8
  __int64 EntryAtLayerHeight; // rax
  __int16 v12; // dx
  bool v13; // zf
  unsigned __int8 *v14; // r12
  unsigned __int16 v15; // bp
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __m128i v19[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_WORD *)a1;
  v3 = 0;
  v19[0] = 0uLL;
  if ( v2 < 0 )
  {
    return (unsigned int)-2147483622;
  }
  else
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 96) + 408LL * v2;
      if ( !*(_BYTE *)v4 )
      {
        CmpKeyEnumStackBeginEnumerationForKeyNodeStack(v4 + 56, *(_QWORD *)(v4 + 16), 0LL);
        *(_BYTE *)v4 = 1;
      }
      if ( (unsigned int)CmpKeyEnumStackAdvance(v4 + 56) != -2147483622 )
        break;
      CmpKeyEnumStackReset(v4 + 56);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_BYTE *)v4 = 0;
      v2 = *(_WORD *)a1 - 1;
      *(_WORD *)a1 = v2;
      if ( v2 < 0 )
        return (unsigned int)-2147483622;
    }
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v6, *(_WORD *)(a1 + 2));
      v10 = 0LL;
      if ( v8 >= 0 )
      {
        while ( 1 )
        {
          EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v4 + 64, v8);
          if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
            break;
          v8 = v12 - 1;
          if ( v8 < 0 )
            goto LABEL_15;
        }
        v10 = *(_QWORD *)(EntryAtLayerHeight + 16);
      }
LABEL_15:
      v13 = (*(_BYTE *)(v10 + 2) & 0x20) == 0;
      v14 = (unsigned __int8 *)(v10 + 76);
      v15 = *(_WORD *)(v10 + 72);
      v19[0].m128i_i64[1] = v10 + 76;
      v19[0].m128i_i16[0] = v15;
      v19[0].m128i_i16[1] = v15;
      if ( v13 )
      {
        v17 = CmpHashUnicodeComponent(v19);
        KcbInHashEntryByName = CmpFindKcbInHashEntryByName(
                                 *(_QWORD *)(KcbAtLayerHeight + 32),
                                 v17 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                 KcbAtLayerHeight,
                                 (__int64)v19);
      }
      else
      {
        v16 = CmpHashCompressedComponent((unsigned __int8 *)(v10 + 76), v15);
        KcbInHashEntryByName = CmpFindKcbInHashEntryByCompressedName(
                                 *(_QWORD *)(KcbAtLayerHeight + 32),
                                 v16 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                 KcbAtLayerHeight,
                                 v14,
                                 v15);
      }
    }
    else
    {
      KcbInHashEntryByName = 0LL;
    }
    *(_QWORD *)(v4 + 424) = v4 + 64;
    if ( KcbInHashEntryByName )
    {
      CmpPopulateKcbStack(v4 + 24, KcbInHashEntryByName);
      *(_QWORD *)(v4 + 416) = v18;
    }
    ++*(_WORD *)a1;
  }
  return v3;
}
