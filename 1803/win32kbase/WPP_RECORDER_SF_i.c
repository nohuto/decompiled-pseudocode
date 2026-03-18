/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C010067C
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_i(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
      19LL,
      va,
      8LL,
      0LL);
  LOWORD(v7) = 19;
  return WppAutoLogTrace(a1, 3LL, 20LL, &WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids, v7, va);
}
