/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@AEBQEAUIDCompInputTarget@@@Z @ 0x1800BFB68
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800BBC90 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@2@_K@Z @ 0x180034244 (-_End@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-$_Uhash_compare@KU-.c)
 *     ??R?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@std@@QEBA_NAEBQEAUIDCompInputTarget@@0@Z @ 0x1800BB58C (--R-$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@std@@QEBA_NAEBQ.c)
 *     ??RDCompTargetHash@@QEBA_KPEBUIDCompInputTarget@@@Z @ 0x1800BB62C (--RDCompTargetHash@@QEBA_KPEBUIDCompInputTarget@@@Z.c)
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::lower_bound(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 v6; // rbp
  __int64 *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = DCompTargetHash::operator()((__int64)a1, *a3) & a1[6];
  for ( i = *(__int64 **)(a1[3] + 16 * v6); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_End(
                            (__int64)a1,
                            &v11,
                            v6) )
    {
      *a2 = (__int64 *)a1[1];
      return a2;
    }
    if ( !std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>::operator()(
            v8,
            i + 2,
            (__int64 **)a3) )
      break;
  }
  if ( std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>::operator()(v9, a3, (__int64 **)i + 2) )
    i = (__int64 *)a1[1];
  *a2 = i;
  return a2;
}
