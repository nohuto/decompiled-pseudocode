/*
 * XREFs of ?_Reinsert@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800BF39C
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@KIV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800BEE3C (-_Check_size@-$_Hash@V-$_Umap_traits@KIV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBKG@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKG@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@1@@Z @ 0x1800B9DA8 (--$_Insert@AEAU-$pair@$$CBKG@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::_Reinsert(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (_QWORD *)a1[1];
  if ( (_QWORD *)*result != result )
  {
    v3 = result[1];
    do
    {
      v4 = *(_QWORD *)a1[1];
      result = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::_Insert<std::pair<unsigned long const,unsigned short> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned short>>>>>(
                           a1,
                           (__int64)v5,
                           (unsigned __int8 *)(v4 + 16),
                           v4);
    }
    while ( v4 != v3 );
  }
  return result;
}
