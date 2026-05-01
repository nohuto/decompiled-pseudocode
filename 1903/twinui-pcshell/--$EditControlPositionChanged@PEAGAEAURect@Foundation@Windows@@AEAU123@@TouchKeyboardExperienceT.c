/*
 * XREFs of ??$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAURect@Foundation@Windows@@1@Z @ 0x18031BB24
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x18005AAA0 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     atexit @ 0x18008753C (atexit.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ @ 0x18031DDC4 (--1Completer@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ.c)
 *     ?EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEAURect@Foundation@Windows@@1@Z @ 0x18031F9F4 (-EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEAURect@Foundatio.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x1803208F4 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged<unsigned short *,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
        const unsigned __int16 **a1,
        struct Windows::Foundation::Rect *a2,
        struct Windows::Foundation::Rect *a3)
{
  TouchKeyboardExperienceTelemetryLogger *v6; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
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
        v8 = &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper;
        Context = &qword_18059A598;
        qword_18059A598 = (__int64)&IamTraceLogging::`vftable';
        atexit(lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::Completer::~Completer(&v8);
      }
    }
    TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged_(v6, *a1, a2, a3);
  }
}
