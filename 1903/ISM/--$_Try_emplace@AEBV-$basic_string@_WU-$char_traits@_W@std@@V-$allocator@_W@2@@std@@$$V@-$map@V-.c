/*
 * XREFs of ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800D78C8
 * Callers:
 *     _lambda_a167d6d0d59f4c80839d02338f04cac9_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void_(__cdecl_)(_RTL_SRWLOCK__)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t_______ @ 0x180161C3C (_lambda_a167d6d0d59f4c80839d02338f04cac9_--operator()_wil--unique_any_t_wil--details--unique_sto.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D6FC4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$basic_string@_WU-$char_traits@_W@std@@.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1800D7358 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 *     ??RCaseInsensitiveStringLess@Holographic@Internal@Windows@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x1800D7F48 (--RCaseInsensitiveStringLess@Holographic@Internal@Windows@@QEBA_NAEBV-$basic_string@_WU-$char_tr.c)
 */

__int64 __fastcall std::map<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>>::_Try_emplace<std::wstring const &,>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rdi
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__int64 *)*a1;
  v7 = (__int64 *)*a1;
  v8 = *(_QWORD *)(*a1 + 8);
  if ( !*(_BYTE *)(v8 + 25) )
  {
    do
    {
      if ( (unsigned __int8)Windows::Internal::Holographic::CaseInsensitiveStringLess::operator()(a1, v8 + 32, a3) )
      {
        v8 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v3 = (__int64 *)v8;
        v8 = *(_QWORD *)v8;
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
    v7 = (__int64 *)*a1;
  }
  if ( v3 == v7
    || (unsigned __int8)Windows::Internal::Holographic::CaseInsensitiveStringLess::operator()(a1, a3, v3 + 4) )
  {
    v11 = a3;
    v9 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>();
    std::_Tree<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>,0>>::_Insert_hint<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot> &,std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>,void *> *>(
      a1,
      &v11,
      v3,
      v9 + 32,
      v9);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
