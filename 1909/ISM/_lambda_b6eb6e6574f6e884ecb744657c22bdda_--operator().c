/*
 * XREFs of _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x1801636B0
 * Callers:
 *     wil::details::lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___::_lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___ @ 0x1801631F8 (wil--details--lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___--_lambda_call__lambda_b6eb.c)
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x180165140 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800D7778 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??$ParsingInitialized@AEAJAEAKAEAKAEAPEB_WAEAGAEAGAEA_NAEA_NAEAGAEAGAEAG_NAEAEAEAIAEAKAEAUPoseData@SpatialInteractionDevices@@AEAU12@@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAJAEAK1AEAPEB_WAEAG3AEA_N4333$$QEA_NAEAEAEAI1AEAUPoseData@1@8@Z @ 0x180162214 (--$ParsingInitialized@AEAJAEAKAEAKAEAPEB_WAEAGAEAGAEA_NAEA_NAEAGAEAGAEAG_NAEAEAEAIAEAKAEAUPoseDa.c)
 *     ?AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180163CC4 (-AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SA.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator()(__int64 *a1)
{
  PCWSTR StringRawBuffer; // r13
  __int64 v3; // rdx
  __int64 *v4; // rbx
  char result; // al
  __int64 v6; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v7; // [rsp+98h] [rbp-70h]
  int v8[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+A8h] [rbp-60h]
  _QWORD v10[4]; // [rsp+B0h] [rbp-58h] BYREF

  v9 = -2LL;
  v7 = a1;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 40), 0LL);
  *(_QWORD *)v8 = StringRawBuffer;
  v3 = *a1;
  LOBYTE(v6) = *(_BYTE *)(*a1 + 1021) != 0;
  v4 = v7;
  SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized<long &,unsigned long &,unsigned long &,wchar_t const * &,unsigned short &,unsigned short &,bool &,bool &,unsigned short &,unsigned short &,unsigned short &,bool,unsigned char &,unsigned int &,unsigned long &,SpatialInteractionDevices::PoseData &,SpatialInteractionDevices::PoseData &>(
    (int *)v7[1],
    (unsigned int *)(v3 + 8),
    (unsigned int *)(v3 + 12),
    (LPCWSTR *)v8,
    (_WORD *)(v3 + 184),
    (_WORD *)(v3 + 186),
    (bool *)(v3 + 456),
    (bool *)(v3 + 440),
    (_WORD *)(v3 + 1004),
    (_WORD *)(v3 + 1006),
    (_WORD *)(v3 + 1008),
    (bool *)&v6,
    (char *)(v3 + 1022),
    (_DWORD *)(v3 + 964),
    (_DWORD *)v7[2],
    (struct SpatialInteractionDevices::PoseData *)(v3 + 508),
    (struct SpatialInteractionDevices::PoseData *)(v3 + 540));
  std::wstring::wstring(v10, (__int64)StringRawBuffer);
  Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping(*v4 + 8, v10);
  std::wstring::_Tidy_deallocate((__int64)v10);
  result = *(_BYTE *)(*v4 + 105);
  *(_BYTE *)(*v4 + 105) = 1;
  return result;
}
