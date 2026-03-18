/*
 * XREFs of RIMQuirkSetPointerDeviceOutputConfig @ 0x1C0107154
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutputConfig@@PEAUCRegionConfig@@@Z @ 0x1C00551B8 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C00E91F0 (RIMGetMonitorPhysicalSize.c)
 *     ApiSetUseDisplaySizeFromRegistry @ 0x1C0141D24 (ApiSetUseDisplaySizeFromRegistry.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall RIMQuirkSetPointerDeviceOutputConfig(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  _OWORD *result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF
  __m128i v8; // [rsp+30h] [rbp-28h] BYREF

  v8.m128i_i64[0] = 0LL;
  if ( !(unsigned int)ApiSetUseDisplaySizeFromRegistry(&v8) )
  {
    v4 = *(_QWORD *)gpDispInfo;
    v8 = *(__m128i *)(*(_QWORD *)gpDispInfo + 24LL);
    v5 = _mm_srli_si128(v8, 8).m128i_u64[0];
    if ( (_DWORD)v5 == HIDWORD(v5) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  }
  *(__m128i *)(a2 + 160) = v8;
  result = (_OWORD *)RIMGetMonitorPhysicalSize((__int64)v7, *(_QWORD *)(a1 + 856));
  *(_OWORD *)(a2 + 176) = *result;
  return result;
}
