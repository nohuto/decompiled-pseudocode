/*
 * XREFs of ??0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z @ 0x18007AAC4
 * Callers:
 *     ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x18007ADF4 (-Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D724 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180078D34 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 */

// Hidden C++ exception states: #wind=4
ISMHeatFrameworkHost *__fastcall ISMHeatFrameworkHost::ISMHeatFrameworkHost(
        ISMHeatFrameworkHost *this,
        struct IInputProcessorHost *a2)
{
  _QWORD *v3; // rbx

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &ISMHeatFrameworkHost::`vftable'{for `IHeatFrameworkHost'};
  *((_QWORD *)this + 1) = &ISMHeatFrameworkHost::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &ISMHeatFrameworkHost::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v3 = (_QWORD *)((char *)this + 56);
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(
                            (__int64)this,
                            0LL,
                            0LL);
  v3[3] = 0LL;
  v3[4] = 0LL;
  v3[5] = 0LL;
  *(_DWORD *)v3 = 1065353216;
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    v3,
    8LL);
  *((_QWORD *)this + 15) = 0LL;
  return this;
}
