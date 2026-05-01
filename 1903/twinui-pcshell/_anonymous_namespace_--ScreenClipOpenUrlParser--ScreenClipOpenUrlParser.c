/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::ScreenClipOpenUrlParser @ 0x1801ABEE8
 * Callers:
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AE1C0 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AEE48 (-HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUrlAsString @ 0x1801B131C (_anonymous_namespace_--ScreenClipOpenUrlParser--ParseUrlAsString.c)
 */

__int64 __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::ScreenClipOpenUrlParser(__int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  v2 = anonymous_namespace_::ScreenClipOpenUrlParser::ParseUrlAsString();
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x665,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return a1;
}
