/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V12@@2@AEBQEBVCResource@@@Z @ 0x18003EFE0
 * Callers:
 *     ??1CWeakResourceReference@@MEAA@XZ @ 0x1800A50D0 (--1CWeakResourceReference@@MEAA@XZ.c)
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800C75BC (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x18003F19C (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::equal_range(
        __int64 a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v4; // r11
  __int64 v5; // rax
  unsigned __int8 *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 i; // r10
  __int64 v10; // rbp
  __int64 **v11; // rax
  __int64 *v12; // r10
  __int64 *v13; // r11
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v20 = a1;
  v4 = a3;
  v5 = 0xCBF29CE484222325uLL;
  v6 = a3 + 8 >= a3 ? (unsigned __int8 *)8 : 0LL;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v7 = *a3++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( (unsigned __int8 *)(a3 - v4) != v6 );
  }
  v8 = v5 & qword_18033D0A0;
  for ( i = *(_QWORD *)(qword_18033D088 + 16 * (v5 & qword_18033D0A0)); ; i = *v12 )
  {
    v10 = i;
    v11 = (__int64 **)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
                        &CWeakResourceReference::s_weakReferenceMap,
                        &v20,
                        v8);
    if ( v12 == *v11 )
      break;
    v14 = *v13;
    if ( v12[2] == *v13 )
    {
      do
        v15 = (_QWORD *)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
                          &CWeakResourceReference::s_weakReferenceMap,
                          &v20,
                          v8);
      while ( v16 != *v15 && v14 == *(_QWORD *)(v16 + 16) );
      if ( v10 != v16 )
      {
        *a2 = v17;
        a2[1] = v16;
        return a2;
      }
      break;
    }
  }
  v19 = qword_18033D078;
  *a2 = qword_18033D078;
  a2[1] = v19;
  return a2;
}
