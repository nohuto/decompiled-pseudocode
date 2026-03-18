/*
 * XREFs of ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z @ 0x180061F80
 * Callers:
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18006178C (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006202C (-_Init@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_compare.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@2@PEAU32@0@Z @ 0x180078D00 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

DataProviderManager *__fastcall DataProviderManager::DataProviderManager(
        DataProviderManager *this,
        struct IMessageSession *a2)
{
  DataProviderManager *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &DataProviderManager::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = std::_List_alloc<std::_List_base_types<std::pair<CResource const * const,CWeakResourceReference *>>>::_Buynode0(
                            this,
                            0LL,
                            0LL);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 12) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Init(
    (char *)this + 48,
    8LL);
  result = this;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
