/*
 * XREFs of ?_Reinsert@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800CAE08
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800CACA8 (-_Check_size@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor@@@std@@V-$_Uhash_compare@_KU-.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800C83F8 (--$_Insert@AEAU-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@std@@V-$_List_unchecked_iterator.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::_Reinsert(
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
      result = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::_Insert<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>>>>(
                           a1,
                           (__int64)v5,
                           (unsigned __int8 *)(v4 + 16),
                           (_QWORD *)v4);
    }
    while ( v4 != v3 );
  }
  return result;
}
