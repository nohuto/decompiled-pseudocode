/*
 * XREFs of WPP_RECORDER_SF_id @ 0x1C0003498
 * Callers:
 *     USBType1RenderBytePosition @ 0x1C0003820 (USBType1RenderBytePosition.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_id(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_3fddc3560b1a3736408b317f911f507a_Traceguids,
      12LL,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 12;
  return WppAutoLogTrace(a1, 0LL, 3LL, &WPP_3fddc3560b1a3736408b317f911f507a_Traceguids, v7, (__int64 *)va);
}
