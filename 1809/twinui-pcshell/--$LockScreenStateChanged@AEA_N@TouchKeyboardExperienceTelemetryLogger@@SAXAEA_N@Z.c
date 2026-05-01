/*
 * XREFs of ??$LockScreenStateChanged@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z @ 0x180091DB8
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_b3f750a11065c5dcf19e2d2a348f0727__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180093D30 (wistd--_Func_impl_wistd--_Callable_obj__lambda_b3f750a11065c5dcf19e2d2a348f0727__0__ea_180093D30.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1802B9AA8 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::LockScreenStateChanged<bool &>(__int64 a1)
{
  const struct _TlgProvider_t *v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  v2 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v7 = 0;
    v5 = a1;
    v6 = 1;
    LODWORD(v2) = TlgWrite(v2, &unk_180462D09, 0LL, 0LL, 3u, &pData);
  }
  return (int)v2;
}
