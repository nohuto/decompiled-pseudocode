/*
 * XREFs of ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180066E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUUsageList@CameraControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@@std@@@std@@@1@@Z @ 0x18006697C (--$_Insert@AEAU-$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@V-$_List_unchecked_it.c)
 *     ??$_Buynode@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@?$_List_buy@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@1@PEAU21@0AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@Z @ 0x180066BB8 (--$_Buynode@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@-$_List_buy@U-$pair@$$CBKUUsageL.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180069360 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceAttach(
        ConsumerControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  unsigned int v3; // edi
  int DeviceId; // ebx
  __int64 v6; // rdx
  void *v8; // rax
  unsigned int *v9; // r9
  struct RIMDevice *v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // r14
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v17; // [rsp+68h] [rbp+28h] BYREF
  struct RIMDevice *v18; // [rsp+78h] [rbp+38h] BYREF

  v17 = a2;
  v3 = a2;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( DeviceId < 0 )
  {
    v6 = 92LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
    return (unsigned int)DeviceId;
  }
  v8 = operator new[](0x28uLL);
  *(_QWORD *)&v15 = v8;
  if ( !v8 )
  {
    DeviceId = -2147024882;
    v6 = 96LL;
    goto LABEL_3;
  }
  memset_0(v8, 0, 0x28uLL);
  DWORD2(v15) = 20;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 345,
    (__int64 **)&v18,
    &v17);
  v10 = (struct RIMDevice *)*((_QWORD *)this + 346);
  if ( v18 == v10 )
  {
    v11 = *(_QWORD *)v10;
    v12 = *(_QWORD **)(*(_QWORD *)v10 + 8LL);
    v13 = std::_List_buy<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>::_Buynode<unsigned long const &,ConsumerControlDeviceCollection::UsageList &>(
            (__int64)v10,
            *(_QWORD **)v10,
            v12,
            &v17,
            &v15);
    v14 = *((_QWORD *)this + 347);
    if ( v14 == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)this + 347) = v14 + 1;
    *(_QWORD *)(v11 + 8) = v13;
    *v12 = v13;
    std::_Hash<std::_Umap_traits<unsigned long,CameraControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>>,0>>::_Insert<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>>>>>(
      (float *)this + 690,
      (__int64)&v15,
      (_DWORD *)(**((_QWORD **)this + 346) + 16LL),
      **((__int64 ***)this + 346));
    v3 = v17;
  }
  else
  {
    *(_OWORD *)((char *)v18 + 24) = v15;
  }
  DeviceId = RIMDeviceCollection::FindDeviceId(this, v3, &v18, v9);
  if ( DeviceId < 0 )
  {
    v6 = 108LL;
    goto LABEL_3;
  }
  return 0LL;
}
