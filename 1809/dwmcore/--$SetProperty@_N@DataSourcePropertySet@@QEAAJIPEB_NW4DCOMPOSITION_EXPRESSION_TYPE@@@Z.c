/*
 * XREFs of ??$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016F054
 * Callers:
 *     ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x18016FF20 (-SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x18016E410 (--$AddProperty@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x18016F2E4 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@_K@Z @ 0x180170418 (-_End@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<bool>(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  _BYTE v20[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v22; // [rsp+50h] [rbp+8h] BYREF
  int v23; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+68h] [rbp+20h] BYREF

  v23 = a2;
  v24 = 0;
  v6 = *(_QWORD *)(a1 + 48) & std::_Hash_bytes((const unsigned __int8 *)&v23, 4uLL);
  while ( 1 )
  {
    v7 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_End(
                     a1,
                     &v22,
                     v6);
    if ( v8 == *v7 )
      break;
    if ( *(_DWORD *)(v8 + 16) == a2 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      goto LABEL_6;
    }
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v8;
LABEL_6:
  v10 = a1 + 64;
  if ( v8 == v9 )
  {
    v11 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<bool>(v10, 17, a3, &v24);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<unsigned int &,unsigned int &>(
      a1,
      v20,
      &v23,
      &v24);
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v10) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*v15 + 8 * v14) != 17 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v15) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v16) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_BYTE *)((*(_DWORD *)(v19 + 8 * v17 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v18 + 32)) = *a3;
  }
  return 0LL;
}
