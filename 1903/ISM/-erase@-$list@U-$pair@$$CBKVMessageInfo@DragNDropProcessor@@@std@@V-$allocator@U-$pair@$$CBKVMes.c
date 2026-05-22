/*
 * XREFs of ?erase@?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18006E700
 * Callers:
 *     ??$_Insert@AEAU?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@1@@Z @ 0x180069B04 (--$_Insert@AEAU-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$_List_unchecked_iterator@V-.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::MessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo____0___::_Insert_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__________::_1_::catch$56 @ 0x180069C73 (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessor--MessageInfo_std--_Uhash_compare_.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18006E378 (-erase@-$_Hash@V-$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x18006A9EC (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rbx

  v3 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  DragNDropProcessor::MessageInfo::~MessageInfo((DragNDropProcessor::MessageInfo *)(a3 + 3));
  std::_Deallocate<16,0>(a3, (const struct std::nothrow_t *)0x50);
  *a2 = v3;
  return a2;
}
