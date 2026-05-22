/*
 * XREFs of ??0SystemControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800A374C
 * Callers:
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800A398C (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 * Callees:
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18001681C (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D964 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800A4218 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=3
SystemControlDeviceCollection *__fastcall SystemControlDeviceCollection::SystemControlDeviceCollection(
        SystemControlDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3)
{
  __int64 v5; // rcx

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &SystemControlDeviceCollection::`vftable';
  *((_DWORD *)this + 690) = 0;
  *((_QWORD *)this + 346) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 346) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,std::array<unsigned short,20>>>>::_Buynode0(v5);
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  *((_DWORD *)this + 690) = 1065353216;
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    (_QWORD *)this + 345,
    8LL);
  *((_QWORD *)this + 3) = a3;
  return this;
}
