/*
 * XREFs of ?_Reinsert@?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800A02B8
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800A0238 (-_Check_size@-$_Hash@V-$_Umap_traits@KV-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$_Uhash_compare@K.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@1@@Z @ 0x18009B4D4 (--$_Insert@AEAU-$pair@$$CBKV-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V-$_List_unchecked_itera.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>::_Reinsert(
        __int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  result = *(_QWORD **)(a1 + 8);
  if ( (_QWORD *)*result != result )
  {
    v3 = result[1];
    do
    {
      v4 = **(_QWORD **)(a1 + 8);
      result = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>::_Insert<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>>>>(
                           a1,
                           (__int64)v5,
                           (unsigned __int8 *)(v4 + 16),
                           (__int64 *)v4);
    }
    while ( v4 != v3 );
  }
  return result;
}
