/*
 * XREFs of _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x180125780
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1801253B0 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 *     wil::details::lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___::_lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___ @ 0x180128768 (wil--details--lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___--_lambda_call__lambda_b6eb.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z @ 0x1800A3268 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z.c)
 *     ?AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180121F30 (-AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SA.c)
 *     ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EIKAEBUPoseData@2@2@Z @ 0x180121FC4 (-ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EI.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator()(_QWORD *a1)
{
  wchar_t *StringRawBuffer; // rsi
  __int64 v3; // rdi
  bool v4; // bp
  const struct SpatialInteractionDevices::PoseData *v5; // r14
  const struct SpatialInteractionDevices::PoseData *v6; // r15
  _DWORD *v7; // r12
  int *v8; // r13
  _DWORD *v9; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v10; // rcx
  char result; // al
  _QWORD v12[2]; // [rsp+98h] [rbp-50h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-40h]

  StringRawBuffer = (wchar_t *)WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 40LL), 0LL);
  v3 = *a1;
  v4 = *(_BYTE *)(*a1 + 1021LL) != 0;
  v5 = (const struct SpatialInteractionDevices::PoseData *)(*a1 + 540LL);
  v6 = (const struct SpatialInteractionDevices::PoseData *)(*a1 + 508LL);
  v7 = (_DWORD *)a1[2];
  v8 = (int *)a1[1];
  v9 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v9 && *v9 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized_(
      v10,
      *v8,
      *(_DWORD *)(v3 + 8),
      *(_DWORD *)(v3 + 12),
      StringRawBuffer,
      *(_WORD *)(v3 + 184),
      *(_WORD *)(v3 + 186),
      *(_BYTE *)(v3 + 456),
      *(_BYTE *)(v3 + 440),
      *(_WORD *)(v3 + 1004),
      *(_WORD *)(v3 + 1006),
      *(_WORD *)(v3 + 1008),
      v4,
      *(_BYTE *)(v3 + 1022),
      *(_DWORD *)(v3 + 964),
      *v7,
      v6,
      v5);
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v12[0]) = 0;
  std::wstring::assign(v12, StringRawBuffer);
  Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping(
    *a1 + 8LL,
    (__int64)v12);
  std::wstring::~wstring((__int64)v12);
  result = *(_BYTE *)(*a1 + 105LL);
  *(_BYTE *)(*a1 + 105LL) = 1;
  return result;
}
