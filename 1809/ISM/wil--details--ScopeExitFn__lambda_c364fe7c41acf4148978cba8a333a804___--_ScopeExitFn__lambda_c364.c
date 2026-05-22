/*
 * XREFs of wil::details::ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___::_ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___ @ 0x1801182F0
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::dtor$1 @ 0x180135D93 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--dtor$1.c)
 * Callees:
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003B5E8 (-_Extract@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UG.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___::_ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___(
        __int64 **a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 *v3; // r9
  __int64 **v4; // rcx
  __int64 *j; // rcx
  __int64 i; // r8
  __int64 *v7; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v1 = **a1;
    if ( !(*(_DWORD *)(v1 + 44) + *(_DWORD *)(v1 + 48)) )
    {
      v2 = **a1;
      v3 = a1[1];
      if ( !*(_BYTE *)(v1 + 25) )
      {
        v4 = *(__int64 ***)(v1 + 16);
        if ( *((_BYTE *)v4 + 25) )
        {
          for ( i = *(_QWORD *)(v1 + 8); !*(_BYTE *)(i + 25) && v2 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
            v2 = i;
        }
        else
        {
          for ( j = *v4; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            ;
        }
      }
      v7 = std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::_Extract(
             v3 + 27,
             (__int64 *)v1);
      operator delete(v7, (const struct std::nothrow_t *)0x38);
    }
  }
}
