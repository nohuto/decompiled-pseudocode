/*
 * XREFs of WPP_RECORDER_SF_dqq @ 0x1C004C6E4
 * Callers:
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0001010 (UsbhCompleteCanceledPdoWakeIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dqq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
      24LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      va2,
      8LL,
      0LL);
  LOWORD(v7) = 24;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids, v7, (__int64 *)va);
}
