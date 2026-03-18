/*
 * XREFs of ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180198FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x1801894C4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801896D4 (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ??$_Insert@AEAU?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x180198C80 (--$_Insert@AEAU-$pair@$$CB_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V-$_List_unche.c)
 *     ??$emplace_front@_KAEAPEAVBamoDataSourceProxy@@@?$list@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAAEAU?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x180198DEC (--$emplace_front@_KAEAPEAVBamoDataSourceProxy@@@-$list@U-$pair@$$CB_KV-$ComPtr@VBamoDataSourcePr.c)
 */

__int64 __fastcall DataProviderProxy::AddDataSource(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  DataProviderManager *v4; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 Unique; // [rsp+50h] [rbp+8h] BYREF
  void (__fastcall ***v8)(_QWORD); // [rsp+58h] [rbp+10h] BYREF

  v8 = (void (__fastcall ***)(_QWORD))a2;
  *((_QWORD *)a2 + 24) = this;
  Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)a2);
  std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>::emplace_front<unsigned __int64,BamoDataSourceProxy * &>(
    (__int64)this + 88,
    &Unique,
    &v8);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Insert<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>>(
    (__int64)this + 80,
    (__int64)v6,
    (unsigned __int8 *)(**((_QWORD **)this + 11) + 16LL),
    **((_QWORD ****)this + 11));
  if ( !v6[8] )
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8, 2147942583LL);
  v4 = (DataProviderManager *)*((_QWORD *)this + 9);
  if ( v4 )
    DataProviderManager::CheckAndRegisterReadyReaders(v4, this, a2);
  return 0LL;
}
