/*
 * XREFs of ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180065250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x180065CC8 (-IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUUsageList@CameraControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@@std@@@std@@@1@@Z @ 0x18006697C (--$_Insert@AEAU-$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@V-$_List_unchecked_it.c)
 *     ??$_Buynode@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@?$_List_buy@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@1@PEAU21@0AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@Z @ 0x180066BB8 (--$_Buynode@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@-$_List_buy@U-$pair@$$CBKUUsageL.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180069360 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceAttach(
        __int64 **this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  unsigned int v4; // edi
  int DeviceId; // ebx
  __int64 v7; // rdx
  void *v9; // rax
  unsigned int *v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rdi
  __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 *v15; // rax
  MobileButtonDeviceCollection *v16; // rcx
  struct RIMDevice *v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v18; // [rsp+38h] [rbp-18h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v21; // [rsp+88h] [rbp+38h] BYREF
  bool v22; // [rsp+98h] [rbp+48h] BYREF

  v21 = a2;
  v17 = 0LL;
  v4 = a2;
  v22 = 0;
  DeviceId = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, a3);
  if ( DeviceId < 0 )
  {
    v7 = 101LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
    return (unsigned int)DeviceId;
  }
  v9 = operator new[](0x28uLL);
  *(_QWORD *)&v19 = v9;
  if ( !v9 )
  {
    DeviceId = -2147024882;
    v7 = 105LL;
    goto LABEL_3;
  }
  memset_0(v9, 0, 0x28uLL);
  DWORD2(v19) = 20;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    this + 345,
    &v18,
    &v21);
  v11 = this[346];
  if ( v18 == v11 )
  {
    v12 = *v11;
    v13 = *(__int64 **)(*v11 + 8);
    v14 = std::_List_buy<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>::_Buynode<unsigned long const &,ConsumerControlDeviceCollection::UsageList &>(
            (_DWORD)v11,
            *v11,
            (_DWORD)v13,
            (unsigned int)&v21,
            (__int64)&v19);
    v15 = this[347];
    if ( v15 == (__int64 *)0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    this[347] = (__int64 *)((char *)v15 + 1);
    *(_QWORD *)(v12 + 8) = v14;
    *v13 = v14;
    std::_Hash<std::_Umap_traits<unsigned long,CameraControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>>,0>>::_Insert<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>>>>>(
      this + 345,
      &v19,
      *this[346] + 16);
    v4 = v21;
  }
  else
  {
    *(_OWORD *)(v18 + 3) = v19;
  }
  DeviceId = RIMDeviceCollection::FindDeviceId((RIMDeviceCollection *)this, v4, &v17, v10);
  if ( DeviceId < 0 )
  {
    v7 = 117LL;
    goto LABEL_3;
  }
  DeviceId = MobileButtonDeviceCollection::IsMobile0DButtonDevice(v16, v17, &v22);
  if ( DeviceId < 0 )
  {
    v7 = 118LL;
    goto LABEL_3;
  }
  *((_BYTE *)*a3 + 48) = v22;
  return 0LL;
}
