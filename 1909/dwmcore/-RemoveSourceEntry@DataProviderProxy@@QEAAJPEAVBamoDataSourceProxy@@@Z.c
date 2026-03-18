/*
 * XREFs of ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180197D88
 * Callers:
 *     ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x1801967A0 (-OnDisconnected@DataSourceProxy@@MEAAJXZ.c)
 *     ?RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180197D50 (-RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x180187DE4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1801883EC (-erase@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_compare.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180197FC4 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash.c)
 */

__int64 __fastcall DataProviderProxy::RemoveSourceEntry(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  _QWORD *v3; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 Unique; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+40h] [rbp+18h] BYREF

  Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)a2);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
    (char *)this + 80,
    &v7,
    &Unique);
  v3 = v7;
  if ( v7 == *((_QWORD **)this + 11) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderproxy.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    *(_QWORD *)(v7[3] + 192LL) = 0LL;
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::erase(
      (_QWORD *)this + 10,
      (__int64)&Unique,
      v3);
    return 0LL;
  }
}
