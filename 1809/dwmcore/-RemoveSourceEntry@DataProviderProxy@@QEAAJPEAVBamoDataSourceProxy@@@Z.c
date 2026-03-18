/*
 * XREFs of ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180171158
 * Callers:
 *     ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x18016FBF0 (-OnDisconnected@DataSourceProxy@@MEAAJXZ.c)
 *     ?RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180171120 (-RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x180153270 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180154AA8 (-erase@-$list@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V-$allocator@U-$.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@_K@Z @ 0x180170418 (-_End@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 */

__int64 __fastcall DataProviderProxy::RemoveSourceEntry(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  __int64 v3; // rsi
  __int64 v4; // r10
  _QWORD *v5; // rax
  __int64 v6; // r11
  _QWORD *v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 Unique; // [rsp+30h] [rbp+8h] BYREF

  Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)a2);
  v3 = Unique;
  v4 = *((_QWORD *)this + 16) & std::_Hash_bytes((const unsigned __int8 *)&Unique, 8uLL);
  while ( 1 )
  {
    v5 = std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_End(
           (__int64)this + 80,
           &Unique,
           v4);
    if ( v6 == *v5 )
      break;
    if ( *(_QWORD *)(v6 + 16) == v3 )
      goto LABEL_6;
  }
  v6 = *((_QWORD *)this + 11);
LABEL_6:
  v7 = (_QWORD *)((char *)this + 88);
  if ( v6 == *((_QWORD *)this + 11) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderproxy.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v6 + 24) + 192LL) = 0LL;
    v9 = std::_Hash_bytes((const unsigned __int8 *)(v6 + 16), 8uLL);
    v11 = *((_QWORD *)this + 13);
    v12 = 2 * (*((_QWORD *)this + 16) & v9);
    if ( *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 16) & v9) + 8) == v10 )
    {
      if ( *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 16) & v9)) == v10 )
      {
        *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 16) & v9)) = *v7;
        v11 = *((_QWORD *)this + 13);
        v13 = *v7;
      }
      else
      {
        v13 = *(_QWORD *)(v10 + 8);
      }
      *(_QWORD *)(v11 + 8 * v12 + 8) = v13;
    }
    else if ( *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 16) & v9)) == v10 )
    {
      *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 16) & v9)) = *(_QWORD *)v10;
    }
    std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::erase(
      (__int64)this + 88,
      &Unique,
      (_QWORD **)v10);
    return 0LL;
  }
}
