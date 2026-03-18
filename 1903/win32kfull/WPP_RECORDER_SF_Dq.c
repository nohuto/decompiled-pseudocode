/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C0239AB0
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C02309A0 (NtUserInjectTouchInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dq(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
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
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_65a49924c3ca3249f60c4eca543eb56c_Traceguids,
      15LL,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v7) = 15;
  return WppAutoLogTrace(
           v5,
           4LL,
           20LL,
           &WPP_65a49924c3ca3249f60c4eca543eb56c_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           va1,
           8LL);
}
