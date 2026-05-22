/*
 * XREFs of _lambda_4f2ec4d072da510feb5622880d58a28d_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void_(__cdecl_)(_RTL_SRWLOCK__)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t_______ @ 0x180149BE8
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8___ @ 0x18014B770 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18014B770.c)
 * Callees:
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1801506D0 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_1801506D0.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801615D8 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 */

LARGE_INTEGER __fastcall lambda_4f2ec4d072da510feb5622880d58a28d_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void____cdecl____RTL_SRWLOCK_____ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t_______(
        _QWORD *a1,
        __int64 a2,
        LARGE_INTEGER a3)
{
  _BYTE **v3; // rsi
  LARGE_INTEGER result; // rax
  LARGE_INTEGER *v6; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+18h] BYREF

  PerformanceCount = a3;
  v3 = (_BYTE **)a1[1];
  result.QuadPart = std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
                      a2 + 72,
                      &PerformanceCount,
                      *a1);
  if ( PerformanceCount.QuadPart != *(_QWORD *)(a2 + 72) )
  {
    std::map<std::wstring,Windows::Internal::Holographic::SpatialGraphSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Try_emplace<std::wstring const &,>(
      a2 + 56,
      v7,
      PerformanceCount.QuadPart + 48);
    v6 = (LARGE_INTEGER *)v7[0];
    *(_BYTE *)(v7[0] + 104LL) = **v3 != 0;
    QueryPerformanceCounter(&PerformanceCount);
    result = PerformanceCount;
    v6[14] = PerformanceCount;
  }
  return result;
}
