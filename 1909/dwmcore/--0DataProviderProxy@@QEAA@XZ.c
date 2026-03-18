/*
 * XREFs of ??0DataProviderProxy@@QEAA@XZ @ 0x1800E36C0
 * Callers:
 *     ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800E3190 (-Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800D5FD0 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_retur.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E2680 (-_Init@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_compare.c)
 */

DataProviderProxy *__fastcall DataProviderProxy::DataProviderProxy(DataProviderProxy *this)
{
  char *v1; // rbx

  v1 = (char *)this + 80;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoDataProviderProxyImpl::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_WORD *)this + 22) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &DataProviderProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataProviderProxy::`vftable'{for `IDataProviderProxy'};
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = std::_List_alloc<std::_List_base_types<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>>::_Buynode0(
                             (__int64)this,
                             0LL,
                             0LL);
  *((_QWORD *)v1 + 3) = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  *((_QWORD *)v1 + 5) = 0LL;
  *(_DWORD *)v1 = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Init(
    (__int64)v1,
    8LL);
  return this;
}
