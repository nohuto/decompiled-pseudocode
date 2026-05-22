/*
 * XREFs of ??1PropertyCache@Holographic@Internal@Windows@@QEAA@XZ @ 0x180151CD8
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$8 @ 0x18015112B (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_18015112B.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x180161290 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidLess@PropertyCa.c)
 */

void __fastcall Windows::Internal::Holographic::PropertyCache::~PropertyCache(
        Windows::Internal::Holographic::PropertyCache *this)
{
  void **v1; // rbx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = (void **)((char *)this + 40);
  std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::erase(
    (char *)this + 40,
    &v2,
    **((_QWORD **)this + 5));
  std::_Deallocate<16,0>(*v1, (const struct std::nothrow_t *)0x48);
}
