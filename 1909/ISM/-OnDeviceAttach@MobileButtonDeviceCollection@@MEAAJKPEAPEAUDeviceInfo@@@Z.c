/*
 * XREFs of ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A16F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E520 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A464 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$emplace@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@?$_Hash@V?$_Umap_traits@KUUsageList@MobileButtonDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x1800A0C90 (--$emplace@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@-$_Hash@V-$_Umap_traits@KUUsageList@.c)
 *     ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x1800A14A0 (-IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A5670 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceAttach(
        MobileButtonDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  unsigned int v4; // edi
  int Device; // ebx
  __int64 v7; // rdx
  void *v9; // rax
  MobileButtonDeviceCollection *v10; // rcx
  int v11; // r8d
  struct RIMDevice *v12; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v16; // [rsp+88h] [rbp+28h] BYREF
  bool v17; // [rsp+98h] [rbp+38h] BYREF

  v16 = a2;
  v12 = 0LL;
  v4 = a2;
  v17 = 0;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( Device < 0 )
  {
    v7 = 101LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v9 = operator new[](0x28uLL);
  *(_QWORD *)&v14 = v9;
  if ( !v9 )
  {
    Device = -2147024882;
    v7 = 105LL;
    goto LABEL_3;
  }
  memset_0(v9, 0, 0x28uLL);
  DWORD2(v14) = 20;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (__int64)this + 2760,
    (__int64)v13,
    (unsigned __int8 *)&v16);
  if ( v13[0] == *((_QWORD *)this + 346) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,MobileButtonDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>>,0>>::emplace<unsigned long const &,MobileButtonDeviceCollection::UsageList &>(
      (__int64)this + 2760,
      (__int64)v13,
      &v16,
      &v14);
    v4 = v16;
  }
  else
  {
    *(_OWORD *)(v13[0] + 24LL) = v14;
  }
  Device = RIMDeviceCollection::FindDevice(this, v4, 0LL, &v12, 0LL);
  if ( Device < 0 )
  {
    v7 = (unsigned int)(v11 + 117);
    goto LABEL_3;
  }
  Device = MobileButtonDeviceCollection::IsMobile0DButtonDevice(v10, v12, &v17);
  if ( Device < 0 )
  {
    v7 = 118LL;
    goto LABEL_3;
  }
  *((_BYTE *)*a3 + 56) = v17;
  return 0LL;
}
