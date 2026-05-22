/*
 * XREFs of _lambda_0ec230e0adbac92e2fff9cb336d4370d_::operator() @ 0x1801522C0
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ed6a7cdcc708de0d2bf982d91253a679___ @ 0x18014AD84 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_ed6a7cdcc708de0.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180088814 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@QEAAAEAU0123@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800D7CBC (--4-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Holog.c)
 *     ??$_Insert_nohint@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_N$$QEAU?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x18014FF64 (--$_Insert_nohint@U-$pair@$$CBU_GUID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180150780 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_180150780.c)
 */

// Hidden C++ exception states: #wind=1
LARGE_INTEGER *__fastcall lambda_0ec230e0adbac92e2fff9cb336d4370d_::operator()(_QWORD *a1, LARGE_INTEGER *a2)
{
  __int64 v4; // r8
  LARGE_INTEGER *QuadPart; // rbx
  __int64 v6; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-60h] BYREF
  __int64 v9; // [rsp+48h] [rbp-50h]
  __int128 v10; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+60h] [rbp-38h] BYREF

  v9 = -2LL;
  v10 = *(_OWORD *)a1[1];
  std::wstring::wstring((__int64)v11);
  std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::_Insert_nohint<std::pair<_GUID const,std::wstring>,std::_Not_a_node_tag>(
    (__int64 **)(*a1 + 88LL),
    (__int64)&PerformanceCount,
    v4,
    &v10);
  std::wstring::_Tidy_deallocate((__int64)v11);
  std::map<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>>::_Try_emplace<std::wstring const &,>(
    (__int64 *)(*a1 + 8LL),
    (__int64)&PerformanceCount,
    (_QWORD *)a1[2]);
  QuadPart = (LARGE_INTEGER *)PerformanceCount.QuadPart;
  v6 = a1[1];
  *(_OWORD *)(PerformanceCount.QuadPart + 144) = *(_OWORD *)v6;
  QuadPart[20].LowPart = *(_DWORD *)(v6 + 16);
  QueryPerformanceCounter(&PerformanceCount);
  QuadPart[21] = PerformanceCount;
  Windows::Internal::Holographic::TimestampedProperty<std::wstring>::operator=(QuadPart + 8, (LARGE_INTEGER *)a1[2]);
  return Windows::Internal::Holographic::TimestampedProperty<std::wstring>::operator=(QuadPart + 13, a2);
}
