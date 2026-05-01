/*
 * XREFs of ?EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEAURect@Foundation@Windows@@1@Z @ 0x18033F254
 * Callers:
 *     ??$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAURect@Foundation@Windows@@1@Z @ 0x18033B374 (--$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@@TouchKeyboardExperienceT.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18033AEA4 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged_(
        TouchKeyboardExperienceTelemetryLogger *this,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Rect *a3,
        struct Windows::Foundation::Rect *a4)
{
  _QWORD *v7; // rax
  TraceLoggingHProvider v8; // r10
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v11; // [rsp+68h] [rbp-A0h]
  __int64 v12; // [rsp+70h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-90h] BYREF
  struct Windows::Foundation::Rect *v14; // [rsp+88h] [rbp-80h]
  __int64 v15; // [rsp+90h] [rbp-78h]
  char *v16; // [rsp+98h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-68h]
  char *v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  char *v20; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-48h]
  struct Windows::Foundation::Rect *v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  char *v24; // [rsp+D8h] [rbp-30h]
  __int64 v25; // [rsp+E0h] [rbp-28h]
  char *v26; // [rsp+E8h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  char *v28; // [rsp+F8h] [rbp-10h]
  __int64 v29; // [rsp+100h] [rbp-8h]

  v7 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v7[1] > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v7[1], 0x400000000000uLL) )
    {
      v9 = 0x1000000LL;
      v11 = &v9;
      v12 = 8LL;
      TlgCreateWsz(&pDesc, a2);
      v14 = a3;
      v16 = (char *)a3 + 4;
      v18 = (char *)a3 + 8;
      v20 = (char *)a3 + 12;
      v24 = (char *)a4 + 4;
      v26 = (char *)a4 + 8;
      v28 = (char *)a4 + 12;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v22 = a4;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      TlgWrite(v8, &unk_180501CD3, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
