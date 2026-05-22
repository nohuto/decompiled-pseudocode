/*
 * XREFs of ?equal_range@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@V12@@2@AEB_K@Z @ 0x18005650C
 * Callers:
 *     ?RemoveMPCTargetForWindowId@MPCInputRouter@@UEAAX_K@Z @ 0x1800557C0 (-RemoveMPCTargetForWindowId@MPCInputRouter@@UEAAX_K@Z.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIHeatSystemContextClient@@@Z @ 0x18007B7AC (-erase@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSystemCo.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18009817C (-erase@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_po_ea_18009817C.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800BF778 (-erase@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@_K_ea_1800BF778.c)
 *     ?count@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEBA_KAEB_K@Z @ 0x1800CDF3C (-count@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800CDF74 (-erase@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor@@@std@@V-$_Uhash_compa_ea_1800CDF74.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800CE010 (-erase@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x180129970 (-erase@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@w_ea_180129970.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@2@_K@Z @ 0x180033F24 (-_End@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-$_Uhash_compare@KU-.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::equal_range(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v4; // r11
  __int64 v6; // rax
  unsigned __int8 *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 i; // r10
  __int64 v11; // r14
  __int64 **v12; // rax
  __int64 *v13; // r10
  __int64 *v14; // r11
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v6 = 0xCBF29CE484222325uLL;
  v7 = a3 + 8 >= a3 ? (unsigned __int8 *)8 : 0LL;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v8 = *a3++ ^ (unsigned __int64)v6;
      v6 = 0x100000001B3LL * v8;
    }
    while ( (unsigned __int8 *)(a3 - v4) != v7 );
  }
  v9 = v6 & a1[6];
  for ( i = *(_QWORD *)(a1[3] + 16 * v9); ; i = *v13 )
  {
    v11 = i;
    v12 = (__int64 **)std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_End(
                        (__int64)a1,
                        &v21,
                        v9);
    if ( v13 == *v12 )
      break;
    v15 = *v14;
    if ( v13[2] == *v14 )
    {
      do
        v16 = std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_End(
                (__int64)a1,
                &v21,
                v9);
      while ( v17 != *v16 && v15 == *(_QWORD *)(v17 + 16) );
      if ( v11 != v17 )
      {
        *a2 = v18;
        a2[1] = v17;
        return a2;
      }
      break;
    }
  }
  v19 = a1[1];
  *a2 = v19;
  a2[1] = v19;
  return a2;
}
