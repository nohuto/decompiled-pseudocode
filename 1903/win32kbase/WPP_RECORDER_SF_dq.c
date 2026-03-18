/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C014D718
 * Callers:
 *     RIMHandleTTMDeviceRemoval @ 0x1C00A59C0 (RIMHandleTTMDeviceRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dq(_DWORD a1, _BYTE a2, _DWORD a3, _DWORD a4, __int64 a5, __int64 a6, ...)
{
  struct RECORDER_LOG__ *v6; // rbx
  int v8; // [rsp+20h] [rbp-48h]
  _DWORD v9[6]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = gRimLog;
  v9[0] = 2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids,
      13LL,
      v9,
      4LL,
      va,
      8LL,
      0LL);
  LOWORD(v8) = 13;
  return ((__int64 (__fastcall *)(struct RECORDER_LOG__ *, __int64, __int64, void *, int, _DWORD *, __int64, char *, __int64, _QWORD))WppAutoLogTrace)(
           v6,
           4LL,
           1LL,
           &WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids,
           v8,
           v9,
           4LL,
           va,
           8LL,
           0LL);
}
