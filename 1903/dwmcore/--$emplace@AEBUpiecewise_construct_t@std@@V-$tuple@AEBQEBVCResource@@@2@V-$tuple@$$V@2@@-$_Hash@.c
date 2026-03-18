/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEBVCResource@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEBVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800746A0
 * Callers:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x180082D58 (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x180082E48 (--0CWeakResourceReference@@AEAA@PEAVCResource@@@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@1@@Z @ 0x180074338 (--$_Insert@AEAU-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$_List_unchecked_iterat.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@2@PEAU32@0@Z @ 0x180074754 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<CResource const * const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 v6; // rsi
  __int64 *v7; // r14
  __int64 v8; // r9
  __int64 v9; // r8

  v6 = *(_QWORD *)qword_18033FF98;
  v7 = *(__int64 **)(*(_QWORD *)qword_18033FF98 + 8LL);
  v8 = std::_List_alloc<std::_List_base_types<std::pair<CResource const * const,CWeakResourceReference *>>>::_Buynode0(
         a1,
         *(_QWORD *)qword_18033FF98,
         v7);
  v9 = **a4;
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 16) = v9;
  if ( qword_18033FFA0 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error(0LL);
  ++qword_18033FFA0;
  *(_QWORD *)(v6 + 8) = v8;
  *v7 = v8;
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Insert<std::pair<CResource const * const,CWeakResourceReference *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource const * const,CWeakResourceReference *>>>>>(
    (__int64)&CWeakResourceReference::s_weakReferenceMap,
    a2,
    (unsigned __int8 *)(*(_QWORD *)qword_18033FF98 + 16LL),
    *(_QWORD *)qword_18033FF98);
  return a2;
}
