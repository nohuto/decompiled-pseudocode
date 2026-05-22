/*
 * XREFs of _lambda_2f7ec991c440bb20d82758962485f4cf_::operator() @ 0x180152488
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ae4609f332701fbf386e5d669d1e8a4c___ @ 0x18014ACD4 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_ae4609f332701fb.c)
 * Callees:
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180150780 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_180150780.c)
 */

LARGE_INTEGER __fastcall lambda_2f7ec991c440bb20d82758962485f4cf_::operator()(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  _OWORD *v4; // rax
  LARGE_INTEGER result; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  std::map<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>>::_Try_emplace<std::wstring const &,>(
    (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL),
    (__int64)v6,
    a2);
  v3 = v6[0] + 176LL;
  v4 = ***(_OWORD ****)a1;
  *(_OWORD *)(v6[0] + 176LL) = *v4;
  *(_OWORD *)(v3 + 16) = v4[1];
  *(_OWORD *)(v3 + 32) = v4[2];
  *(_OWORD *)(v3 + 48) = v4[3];
  *(_OWORD *)(v3 + 64) = v4[4];
  *(_OWORD *)(v3 + 80) = v4[5];
  *(_OWORD *)(v3 + 96) = v4[6];
  *(_OWORD *)(v3 + 112) = v4[7];
  *(_OWORD *)(v3 + 128) = v4[8];
  *(_OWORD *)(v3 + 144) = v4[9];
  QueryPerformanceCounter(&PerformanceCount);
  result = PerformanceCount;
  *(LARGE_INTEGER *)(v3 + 160) = PerformanceCount;
  return result;
}
