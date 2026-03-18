/*
 * XREFs of ??0DataSourceProxy@@QEAA@XZ @ 0x180171434
 * Callers:
 *     ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18015393C (-CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprov.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBII@std@@PEAX@2@PEAU32@0@Z @ 0x180170358 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBII@std@@V-$allocator@U-$pair@$$CBII@std.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180170444 (-_Init@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

DataSourceProxy *__fastcall DataSourceProxy::DataSourceProxy(DataSourceProxy *this)
{
  char *v1; // rbx
  DataSourceProxy *result; // rax

  v1 = (char *)this + 64;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoDataSourceProxyImpl::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_WORD *)this + 22) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,unsigned int>>>::_Buynode0(
                            (__int64)this,
                            0LL,
                            0LL);
  *((_QWORD *)v1 + 3) = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  *((_QWORD *)v1 + 5) = 0LL;
  *(_DWORD *)v1 = 1065353216;
  std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Init(
    v1,
    8LL);
  *((_QWORD *)v1 + 8) = 0LL;
  result = this;
  *((_QWORD *)v1 + 9) = 0LL;
  *((_QWORD *)v1 + 10) = 0LL;
  *((_DWORD *)v1 + 22) = 0;
  *((_QWORD *)v1 + 12) = 0LL;
  *((_QWORD *)v1 + 13) = 0LL;
  *((_QWORD *)v1 + 14) = 0LL;
  *((_DWORD *)v1 + 30) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  return result;
}
