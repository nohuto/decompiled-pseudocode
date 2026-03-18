/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C010FB18
 * Callers:
 *     RIMGetLastInvertedPenTime @ 0x1C010E420 (RIMGetLastInvertedPenTime.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_i(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  __int64 v6; // rdi
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v6 = gRimLog;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(v6, 3LL, 21LL, a5, v8, va);
}
