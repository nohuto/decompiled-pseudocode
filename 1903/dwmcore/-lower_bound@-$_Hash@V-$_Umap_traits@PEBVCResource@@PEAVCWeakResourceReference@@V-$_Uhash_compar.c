/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@AEBQEBVCResource@@@Z @ 0x180074570
 * Callers:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x180082D58 (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x180082E48 (--0CWeakResourceReference@@AEAA@PEAVCResource@@@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x18002FEE8 (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::lower_bound(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  _QWORD *v10; // r11
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v3 = a3;
  v4 = 0xCBF29CE484222325uLL;
  v5 = a3 + 8 >= a3 ? 8 : 0;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v6 = *a3++ ^ (unsigned __int64)v4;
      v4 = 0x100000001B3LL * v6;
    }
    while ( a3 - v3 != v5 );
  }
  v7 = v4 & qword_18033FFC0;
  while ( 1 )
  {
    v8 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
           (__int64)&CWeakResourceReference::s_weakReferenceMap,
           &v12,
           v7);
    if ( v9 == *v8 )
      break;
    if ( *(_QWORD *)(v9 + 16) == *(_QWORD *)v3 )
    {
      *v10 = v9;
      return v10;
    }
  }
  *v10 = qword_18033FF98;
  return v10;
}
