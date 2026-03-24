/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0004D94
 * Callers:
 *     MouseClassPoRequestComplete @ 0x1C0002BE0 (MouseClassPoRequestComplete.c)
 *     MouseClassWWPowerUpComplete @ 0x1C0003F00 (MouseClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001760 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids, v8, va, 8LL, 0LL);
}
