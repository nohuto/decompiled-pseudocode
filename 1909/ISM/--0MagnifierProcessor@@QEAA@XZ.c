/*
 * XREFs of ??0MagnifierProcessor@@QEAA@XZ @ 0x1800C20E4
 * Callers:
 *     ??$MakeAndInitialize@VMagnifierProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVMagnifierProcessor@@@Z @ 0x1800C1B18 (--$MakeAndInitialize@VMagnifierProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVMagnifierProce.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@0@Z @ 0x18006D434 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincipal@@@WRL@M.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D724 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 */

// Hidden C++ exception states: #wind=5
MagnifierProcessor *__fastcall MagnifierProcessor::MagnifierProcessor(MagnifierProcessor *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>::`vftable';
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MagnifierProcessor::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>'};
  *((_QWORD *)this + 2) = &MagnifierProcessor::`vftable'{for `IMagnifierServerOwner'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>>::_Buynode0(
                            (__int64)v2,
                            0LL,
                            0LL);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 10) = 1065353216;
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    (_QWORD *)this + 5,
    8LL);
  *((_QWORD *)this + 13) = 500LL;
  *((_QWORD *)this + 14) = 100LL;
  *((_DWORD *)this + 30) = 200;
  *((_DWORD *)this + 31) = 270;
  *((_QWORD *)this + 16) = 0x3FE8D4FDF3B645A2LL;
  return this;
}
