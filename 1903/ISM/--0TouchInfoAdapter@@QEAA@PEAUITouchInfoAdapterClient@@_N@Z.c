/*
 * XREFs of ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x180141B88
 * Callers:
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x18010337C (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D964 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180078F74 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 */

// Hidden C++ exception states: #wind=3
TouchInfoAdapter *__fastcall TouchInfoAdapter::TouchInfoAdapter(
        TouchInfoAdapter *this,
        struct ITouchInfoAdapterClient *a2)
{
  _QWORD *v4; // rbx

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &TouchInfoAdapter::`vftable'{for `ISessionBasedPointerDeviceArbitrationClient'};
  *((_QWORD *)this + 1) = &TouchInfoAdapter::`vftable'{for `RefCountedObject'};
  v4 = (_QWORD *)((char *)this + 40);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(
                            (__int64)this,
                            0LL,
                            0LL);
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[5] = 0LL;
  *(_DWORD *)v4 = 1065353216;
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    v4,
    8LL);
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 32) = 0;
  memset_0((char *)this + 112, 0, 0x248uLL);
  *((_BYTE *)this + 696) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_WORD *)this + 54) = 0;
  return this;
}
