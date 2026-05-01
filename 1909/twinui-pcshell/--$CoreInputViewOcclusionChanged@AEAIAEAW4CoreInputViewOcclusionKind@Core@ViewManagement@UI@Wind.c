/*
 * XREFs of ??$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@PEAGAEAURect@Foundation@5@AEAU675@AEAU675@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@$$QEAPEAGAEAURect@Foundation@5@33@Z @ 0x18033B1E4
 * Callers:
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180340390 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 * Callees:
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ @ 0x18033D618 (--1Completer@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ.c)
 *     ?CoreInputViewOcclusionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@PEBGAEAURect@Foundation@6@22@Z @ 0x18033EDD0 (-CoreInputViewOcclusionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIW4CoreInputViewOcc.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180340130 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged<unsigned int &,enum Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind &,unsigned short *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
        unsigned int *a1,
        unsigned int *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char result; // al
  __int64 v11; // rcx
  WINBOOL fPending; // [rsp+40h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v14; // [rsp+50h] [rbp-18h] BYREF
  int v15; // [rsp+58h] [rbp-10h]

  result = TouchKeyboardExperienceTelemetryLogger::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2);
  if ( result )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(
           &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v14 = &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper;
        Context = &qword_1805C2AD8;
        qword_1805C2AD8 = (__int64)&IamTraceLogging::`vftable';
        atexit(lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
        v15 = 0;
        wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::Completer::~Completer(&v14);
      }
    }
    return TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged_(v11, *a1, *a2, *a3, a4, a5, a6);
  }
  return result;
}
