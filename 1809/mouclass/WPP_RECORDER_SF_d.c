/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0004CDC
 * Callers:
 *     MouDeterminePortsServiced @ 0x1C000C940 (MouDeterminePortsServiced.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 *     MouConfiguration @ 0x1C000FA00 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001760 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v9; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, a2, 1LL, &WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids, v9, va, 4LL, 0LL);
}
