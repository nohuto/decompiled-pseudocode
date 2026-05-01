/*
 * XREFs of ??$InvalidExperienceId@AEAPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBG@Z @ 0x18032B5AC
 * Callers:
 *     _anonymous_namespace_::GetViewIdFromExperienceId @ 0x18032F384 (_anonymous_namespace_--GetViewIdFromExperienceId.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18033AEA4 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::InvalidExperienceId<unsigned short const * &>(LPCWSTR *a1)
{
  __int64 v2; // rax
  TraceLoggingHProvider v3; // r10
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  v2 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         a1,
         lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v2 + 8) > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(*(TraceLoggingHProvider *)(v2 + 8), 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v10 = 0;
      v8 = &v5;
      v5 = 0x1000000LL;
      v9 = 8;
      LOBYTE(v2) = TlgWrite(v3, &unk_1804FF86E, 0LL, 0LL, 4u, &pData);
    }
  }
  return v2;
}
