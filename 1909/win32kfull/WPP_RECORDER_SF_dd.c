/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C02392A4
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C0230380 (NtUserInjectTouchInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  struct RECORDER_LOG__ *v5; // rbx
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  v5 = gFullLog;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_0005b7b05e953d15cfa73aaf0a7b9adf_Traceguids,
      19LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 19;
  return WppAutoLogTrace(
           v5,
           2LL,
           20LL,
           &WPP_0005b7b05e953d15cfa73aaf0a7b9adf_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           va1,
           4LL);
}
