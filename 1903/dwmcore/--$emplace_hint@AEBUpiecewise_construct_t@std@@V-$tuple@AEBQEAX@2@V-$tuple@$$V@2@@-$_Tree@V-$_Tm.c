/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180236E6C
 * Callers:
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180236F28 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x180236B94 (--$_Insert_hint@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@s.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<void * const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5)
{
  __int64 v7; // rsi
  __int64 v8; // rcx

  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *(_QWORD *)v7 = CPointerDeviceCache::s_deviceCache;
  *(_QWORD *)(v7 + 8) = CPointerDeviceCache::s_deviceCache;
  *(_QWORD *)(v7 + 16) = CPointerDeviceCache::s_deviceCache;
  *(_WORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 32) = **a5;
  memset_0((void *)(v7 + 40), 0, 0x38uLL);
  std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_hint<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
    v8,
    a2,
    a3,
    (unsigned __int64 *)(v7 + 32),
    (_QWORD *)v7);
  return a2;
}
