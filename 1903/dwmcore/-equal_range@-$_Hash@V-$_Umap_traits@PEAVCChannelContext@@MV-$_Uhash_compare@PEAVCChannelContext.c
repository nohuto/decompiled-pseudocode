/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@V12@@2@AEBQEAVCChannelContext@@@Z @ 0x1800C5B38
 * Callers:
 *     ??1CChannelContext@@UEAA@XZ @ 0x1800CF7E0 (--1CChannelContext@@UEAA@XZ.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x18002FEE8 (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::equal_range(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v4; // r11
  __int64 v6; // rax
  unsigned __int8 *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 i; // r10
  __int64 v11; // r14
  __int64 **v12; // rax
  __int64 *v13; // r10
  __int64 *v14; // r11
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v20; // rax
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v6 = 0xCBF29CE484222325uLL;
  v7 = a3 + 8 >= a3 ? (unsigned __int8 *)8 : 0LL;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v8 = *a3++ ^ (unsigned __int64)v6;
      v6 = 0x100000001B3LL * v8;
    }
    while ( (unsigned __int8 *)(a3 - v4) != v7 );
  }
  v9 = v6 & a1[6];
  for ( i = *(_QWORD *)(a1[3] + 16 * v9); ; i = *v13 )
  {
    v11 = i;
    v12 = (__int64 **)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
                        (__int64)a1,
                        &v21,
                        v9);
    if ( v13 == *v12 )
      break;
    v15 = *v14;
    if ( v13[2] == *v14 )
    {
      do
        v16 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
                (__int64)a1,
                &v21,
                v9);
      while ( v17 != *v16 && v15 == *(_QWORD *)(v17 + 16) );
      if ( v11 != v17 )
      {
        *a2 = v18;
        a2[1] = v17;
        return a2;
      }
      break;
    }
  }
  v20 = a1[1];
  *a2 = v20;
  a2[1] = v20;
  return a2;
}
