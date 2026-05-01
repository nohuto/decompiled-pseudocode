/*
 * XREFs of ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1801CEC64
 * Callers:
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1800431BC (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18003BAD4 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180040A08 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetGutterWidth@CortanaDesktopExperienceView@@AEAAHXZ @ 0x180041390 (-GetGutterWidth@CortanaDesktopExperienceView@@AEAAHXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800415B0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x180043430 (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x180055C6C (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ApplyCortiniWindowRegion(
        CortanaDesktopExperienceView *this,
        HRGN a2,
        struct tagRECT *a3,
        ExperienceManagerUtils *a4)
{
  int v6; // ebx
  int v8; // esi
  unsigned int GutterWidth; // eax
  HMONITOR v10; // r8
  ExperienceManagerUtils *v11; // r9
  int v12; // ebp
  HMONITOR v13; // r8
  int SpeechTextInputHeight; // r14d
  HMONITOR v15; // r8
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edi
  LANGID ThreadUILanguage; // ax
  int v21; // edi
  LANGID v22; // ax
  CortanaDesktopExperienceView *v23; // rcx
  int v24; // ebx
  int v25; // eax
  unsigned int v26; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3->right - a3->left;
  v8 = a3->bottom - a3->top;
  GutterWidth = CortanaDesktopExperienceView::GetGutterWidth(this);
  v12 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)GutterWidth, v11, v10);
  SpeechTextInputHeight = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, a4, v13);
  if ( !IsSearchAndCortanaSplitEnabled() )
    SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, a4, v15);
  v16 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x87, a4, v15);
  v17 = CortanaDesktopExperienceView::RemoveRectFromRegion(
          (CortanaDesktopExperienceView *)(unsigned int)(v8 - SpeechTextInputHeight - v16),
          a2,
          0,
          0,
          v6,
          v8 - SpeechTextInputHeight - v16);
  v18 = v17;
  if ( v17 >= 0 )
  {
    ThreadUILanguage = GetThreadUILanguage();
    v21 = v12;
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      v21 = v6;
    v22 = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(v22) )
      v24 = v6 - v12;
    else
      v24 = 0;
    v25 = CortanaDesktopExperienceView::RemoveRectFromRegion(v23, a2, v24, 0, v21, v8);
    v26 = v25;
    if ( v25 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x915,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v25);
      return v26;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v17);
    return v18;
  }
}
