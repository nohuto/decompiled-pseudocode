/*
 * XREFs of ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1801880C4
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800E4E9C (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x180188390 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x1801CC870 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_S.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180188528 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_c.c)
 *     ?GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z @ 0x1801977D0 (-GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z.c)
 */

struct BamoDataSourceProxy *__fastcall DataProviderManager::GetDataSourceProxy(
        DataProviderManager *this,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::lower_bound(
    (char *)this + 40,
    &v6,
    &v7);
  if ( v6 == *((_QWORD *)this + 6) )
    return 0LL;
  else
    return DataProviderProxy::GetDataSource(*(DataProviderProxy **)(v6 + 24), a3);
}
