/*
 * XREFs of ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x1800D7104
 * Callers:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x180088570 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1800AF280 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x1801CAB28 (-erase@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 */

void __fastcall CDropShadow::RemoveVisualFromCache(CDropShadow *this, struct CVisual *a2)
{
  struct CVisual **v3; // r9
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 *i; // r8
  __int64 *v12; // rax
  char v13; // [rsp+30h] [rbp+8h] BYREF
  struct CVisual *v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  v3 = &v14;
  v4 = 8LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = *(unsigned __int8 *)v3;
    v3 = (struct CVisual **)((char *)v3 + 1);
    v6 = 0x100000001B3LL * (v7 ^ v6);
    --v4;
  }
  while ( v4 );
  v8 = *((_QWORD *)this + 28);
  v9 = (__int64 *)*((_QWORD *)this + 26);
  v10 = 2 * (v6 & *((_QWORD *)this + 31));
  for ( i = *(__int64 **)(v8 + 16 * (v6 & *((_QWORD *)this + 31))); ; i = (__int64 *)*i )
  {
    v12 = *(__int64 **)(v8 + 8 * v10) == v9 ? (__int64 *)*((_QWORD *)this + 26) : **(__int64 ***)(v8 + 8 * v10 + 8);
    if ( i == v12 )
      break;
    if ( (struct CVisual *)i[2] == a2 )
      goto LABEL_8;
  }
  i = (__int64 *)*((_QWORD *)this + 26);
LABEL_8:
  if ( i != v9 )
    std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::erase(
      (char *)this + 200,
      &v13);
}
