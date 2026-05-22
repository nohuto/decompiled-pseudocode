/*
 * XREFs of ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x18009EB10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E760 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x180099804 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18009A120 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009A6D8 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x18009C594 (-ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendDeviceUpdate(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct MPCSourceDeviceInfo *a3)
{
  __int64 v6; // rcx
  struct DeviceInfo *v7; // rbx
  int DeviceInfo; // eax
  __int64 v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  unsigned int v12; // edi
  __int64 v13; // rcx
  RawInputProvidersTracing *v14; // rcx
  struct DeviceInfo *v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+48h] [rbp+10h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v17 = a2;
  v16 = 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (__int64)this + 96,
    (__int64)&v18,
    (unsigned __int8 *)&v17);
  if ( v18 == *((_QWORD *)this + 13) )
  {
    DeviceInfo = RIMDeviceCollection::GetDeviceInfo((SpatialRimDeviceCollection *)((char *)this - 2760), a2, &v16);
    v7 = v16;
    if ( DeviceInfo < 0 )
    {
LABEL_8:
      v12 = -2147483638;
      goto LABEL_9;
    }
  }
  else
  {
    v7 = *(struct DeviceInfo **)(v18 + 24);
  }
  if ( !v7 )
    goto LABEL_8;
  v9 = 7LL;
  v10 = (_OWORD *)((char *)v7 + 612);
  do
  {
    *v10 = *(_OWORD *)a3;
    v10[1] = *((_OWORD *)a3 + 1);
    v10[2] = *((_OWORD *)a3 + 2);
    v10[3] = *((_OWORD *)a3 + 3);
    v10[4] = *((_OWORD *)a3 + 4);
    v10[5] = *((_OWORD *)a3 + 5);
    v10[6] = *((_OWORD *)a3 + 6);
    v10 += 8;
    v11 = *((_OWORD *)a3 + 7);
    a3 = (const struct MPCSourceDeviceInfo *)((char *)a3 + 128);
    *(v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  *v10 = *(_OWORD *)a3;
  v10[1] = *((_OWORD *)a3 + 1);
  v10[2] = *((_OWORD *)a3 + 2);
  *((_QWORD *)v10 + 6) = *((_QWORD *)a3 + 6);
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this - 343) + 48LL))(
          *((_QWORD *)this - 343),
          v7);
LABEL_9:
  if ( RawInputProvidersTracing::IsEnabled(v6) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v13,
      (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::ControllerDeviceUpdate_(v14, v12, a2, v7);
  }
  return v12;
}
