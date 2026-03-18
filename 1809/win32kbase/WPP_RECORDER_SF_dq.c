/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C0121444
 * Callers:
 *     RIMHandleTTMDeviceRemoval @ 0x1C009248C (RIMHandleTTMDeviceRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dq(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, __int64 a6, ...)
{
  __int64 v6; // rbx
  int v8; // [rsp+20h] [rbp-48h]
  _DWORD v9[6]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = gRimLog;
  v9[0] = 2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, _DWORD *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6348e708fd723b9140a504851f6d1be1_Traceguids,
      13LL,
      v9,
      4LL,
      va,
      8LL,
      0LL);
  LOWORD(v8) = 13;
  return WppAutoLogTrace(v6, 3LL, 21LL, &WPP_6348e708fd723b9140a504851f6d1be1_Traceguids, v8, v9);
}
