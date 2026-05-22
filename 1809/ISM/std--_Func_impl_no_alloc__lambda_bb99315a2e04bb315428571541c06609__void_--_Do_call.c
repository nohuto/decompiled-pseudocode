/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bb99315a2e04bb315428571541c06609__void_::_Do_call @ 0x18011DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003B5E8 (-_Extract@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UG.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_bb99315a2e04bb315428571541c06609__void_::_Do_call(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 **v4; // rcx
  __int64 *j; // rcx
  __int64 i; // r8
  __int64 *v7; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = **(_QWORD **)(a1 + 16);
  v3 = v2;
  if ( !*(_BYTE *)(v2 + 25) )
  {
    v4 = *(__int64 ***)(v2 + 16);
    if ( *((_BYTE *)v4 + 25) )
    {
      for ( i = *(_QWORD *)(v2 + 8); !*(_BYTE *)(i + 25) && v3 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = i;
    }
    else
    {
      for ( j = *v4; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        ;
    }
  }
  v7 = std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::_Extract(
         (_QWORD *)(v1 + 216),
         (__int64 *)v2);
  operator delete(v7, (const struct std::nothrow_t *)0x38);
}
