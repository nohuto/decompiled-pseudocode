/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C005DBFC
 * Callers:
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C005D3B8 (CheckUSBFnIncludeDefaultCfg.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_L(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids, v8, va);
}
