/*
 * XREFs of ??0MobileButtonDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800A0EF4
 * Callers:
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800A1314 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 * Callees:
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18001681C (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D964 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ??0?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x1800746F0 (--0-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$e.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800A2328 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUUsageList@MobileButtonDeviceCollectio.c)
 */

// Hidden C++ exception states: #wind=4
MobileButtonDeviceCollection *__fastcall MobileButtonDeviceCollection::MobileButtonDeviceCollection(
        MobileButtonDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3)
{
  __int64 v5; // rcx
  char *v7; // [rsp+50h] [rbp+18h] BYREF

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &MobileButtonDeviceCollection::`vftable';
  v7 = (char *)this + 2760;
  *((_DWORD *)this + 690) = 0;
  *((_QWORD *)this + 346) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 346) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>>>::_Buynode0(v5);
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  *((_DWORD *)this + 690) = 1065353216;
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    (_QWORD *)this + 345,
    8LL);
  HIDWORD(v7) = ((unsigned __int64)this + 2824) >> 32;
  LODWORD(v7) = 0;
  std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>(
    (_QWORD *)this + 353,
    &v7);
  *((_QWORD *)this + 361) = 0LL;
  *((_QWORD *)this + 3) = a3;
  return this;
}
