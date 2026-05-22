/*
 * XREFs of _lambda_a167d6d0d59f4c80839d02338f04cac9_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void_(__cdecl_)(_RTL_SRWLOCK__)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t_______ @ 0x180161C3C
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x180162528 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_180162528.c)
 * Callees:
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800D78C8 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@$$V@-$map@V-.c)
 *     _lambda_b4e0cd5f6af37fda6baddea144408786_::operator() @ 0x18016354C (_lambda_b4e0cd5f6af37fda6baddea144408786_--operator().c)
 */

__int64 __fastcall lambda_a167d6d0d59f4c80839d02338f04cac9_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void____cdecl____RTL_SRWLOCK_____ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t_______(
        unsigned int **a1,
        __int64 a2)
{
  unsigned int *v2; // rbx
  unsigned int *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1[1];
  v3 = *a1;
  v4 = *(_QWORD *)(a2 + 104);
  v5 = v4;
  result = *(_QWORD *)(v4 + 8);
  if ( *(_BYTE *)(result + 25) )
    goto LABEL_9;
  v7 = *v3;
  do
  {
    if ( *(_DWORD *)(result + 32) >= v7 )
    {
      v5 = result;
      result = *(_QWORD *)result;
    }
    else
    {
      result = *(_QWORD *)(result + 16);
    }
  }
  while ( !*(_BYTE *)(result + 25) );
  if ( v5 == v4 || v7 < *(_DWORD *)(v5 + 32) )
LABEL_9:
    v5 = *(_QWORD *)(a2 + 104);
  if ( v5 != v4 )
  {
    std::map<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>>::_Try_emplace<std::wstring const &,>(
      (__int64 *)(a2 + 24),
      (__int64)v8,
      v5 + 40);
    return lambda_b4e0cd5f6af37fda6baddea144408786_::operator()(v2, v8[0] + 64);
  }
  return result;
}
