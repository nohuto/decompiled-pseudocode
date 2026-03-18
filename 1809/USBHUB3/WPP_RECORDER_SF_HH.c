/*
 * XREFs of WPP_RECORDER_SF_HH @ 0x1C0027C88
 * Callers:
 *     HUBMISC_GenerateControllerSuffix @ 0x1C002D808 (HUBMISC_GenerateControllerSuffix.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_HH(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int16 v8[12]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v8[0] = 4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, __int16 *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
      122LL,
      va,
      2LL,
      v8,
      2LL,
      0LL);
  LOWORD(v7) = 122;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_5bc5aabc45393ebf49682d6683797972_Traceguids, v7, va);
}
