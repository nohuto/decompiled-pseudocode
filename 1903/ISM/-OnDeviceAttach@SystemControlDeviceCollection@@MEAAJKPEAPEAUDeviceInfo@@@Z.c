/*
 * XREFs of ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A3BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E760 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A684 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$emplace@AEBKV?$array@G$0BE@@std@@@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x1800A36A8 (--$emplace@AEBKV-$array@G$0BE@@std@@@-$_Hash@V-$_Umap_traits@KV-$array@G$0BE@@std@@V-$_Uhash_com.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A5830 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnDeviceAttach(
        SystemControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  unsigned int v3; // edi
  int Device; // ebx
  __int64 v6; // rdx
  struct RIMDevice *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v11; // r8d
  unsigned int v12; // [rsp+30h] [rbp-50h] BYREF
  struct RIMDevice *v13[2]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v3 = a2;
  v12 = a2;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( Device < 0 )
  {
    v6 = 81LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  memset_0(v14, 0, 0x28uLL);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (__int64)this + 2760,
    (__int64)v13,
    (unsigned __int8 *)&v12);
  v8 = v13[0];
  if ( v13[0] == *((struct RIMDevice **)this + 346) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,std::array<unsigned short,20>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::array<unsigned short,20>>>,0>>::emplace<unsigned long const &,std::array<unsigned short,20>>(
      (__int64)this + 2760,
      (__int64)v13,
      &v12,
      (__int64)v14);
    v3 = v12;
  }
  else
  {
    v9 = v14[1];
    *(_OWORD *)((char *)v13[0] + 20) = v14[0];
    v10 = v15;
    *(_OWORD *)((char *)v8 + 36) = v9;
    *(_QWORD *)((char *)v8 + 52) = v10;
  }
  Device = RIMDeviceCollection::FindDevice(this, v3, 0LL, v13, 0LL);
  if ( Device < 0 )
  {
    v6 = (unsigned int)(v11 + 90);
    goto LABEL_3;
  }
  return 0LL;
}
