/*
 * XREFs of ??1PropertyCache@Holographic@Internal@Windows@@QEAA@XZ @ 0x1801107B0
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$8 @ 0x1801360AB (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_1801360AB.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x18011AA10 (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidLess@PropertyC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::PropertyCache::~PropertyCache(
        Windows::Internal::Holographic::PropertyCache *this)
{
  void **v1; // rbx

  v1 = (void **)((char *)this + 40);
  std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Erase(
    (char *)this + 40,
    *(_QWORD *)(*((_QWORD *)this + 5) + 8LL));
  *((_QWORD *)*v1 + 1) = *v1;
  *(_QWORD *)*v1 = *v1;
  *((_QWORD *)*v1 + 2) = *v1;
  v1[1] = 0LL;
  operator delete(*v1, (const struct std::nothrow_t *)0x48);
}
