/*
 * XREFs of ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x18009DC60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E520 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ??$make_shared@ULegacyDeviceInfo@@$$V@std@@YA?AV?$shared_ptr@ULegacyDeviceInfo@@@0@XZ @ 0x18009394C (--$make_shared@ULegacyDeviceInfo@@$$V@std@@YA-AV-$shared_ptr@ULegacyDeviceInfo@@@0@XZ.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800995E4 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x180099F00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18009B6D8 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V_ea_18009B6D8.c)
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x18009FDB4 (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceAdded(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4)
{
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  std::_Ref_count_base *v12; // rdx
  std::_Ref_count_base *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  const char *v17; // r9
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v22[2]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v23; // [rsp+48h] [rbp-30h] BYREF
  std::_Ref_count_base *v24; // [rsp+50h] [rbp-28h]
  _QWORD v25[3]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v27; // [rsp+90h] [rbp+18h] BYREF

  v27 = a3;
  v22[1] = (_DWORD *)-2LL;
  try
  {
    std::make_shared<LegacyDeviceInfo,>(&v23);
    *v23 = v27;
    v23[1] = a2;
    v23[2] = 1568;
    v7 = v23 + 153;
    v8 = a4;
    v9 = 7LL;
    do
    {
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      v7[3] = v8[3];
      v7[4] = v8[4];
      v7[5] = v8[5];
      v7[6] = v8[6];
      v7 += 8;
      *(v7 - 1) = v8[7];
      v8 += 8;
      --v9;
    }
    while ( v9 );
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    *((_QWORD *)v7 + 6) = *((_QWORD *)v8 + 6);
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
      a1 + 96,
      (__int64)&v21,
      (unsigned __int8 *)&v27);
    v11 = v21;
    if ( v21 == *(_QWORD *)(a1 + 104) )
    {
      v22[0] = &v27;
      std::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        a1 + 96,
        (__int64)v25,
        v10,
        v22);
      v11 = v25[0];
    }
    else
    {
      v25[0] = v21;
    }
    v12 = v24;
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
      v12 = v24;
    }
    *(_QWORD *)(v11 + 24) = v23;
    v13 = *(std::_Ref_count_base **)(v11 + 32);
    *(_QWORD *)(v11 + 32) = v12;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD))(**(_QWORD **)(a1 - 2744) + 40LL))(
            *(_QWORD *)(a1 - 2744),
            v23,
            *(_QWORD *)(a1 - 2736));
    v16 = v14;
    if ( v14 >= 0 )
    {
      if ( RawInputProvidersTracing::IsEnabled(v15) )
      {
        wil::details::static_lazy<RawInputProvidersTracing>::get(
          v19,
          (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
        RawInputProvidersTracing::TelemetryDdiDevice_Added_(v20, v27, a2, (char *)a4 + 10);
      }
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x258,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v14);
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      result = v16;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25D,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialr"
                                         "imdevicecollection.cpp",
                           v17);
  }
  return result;
}
