/*
 * XREFs of ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1801884A4
 * Callers:
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1800171C4 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800108A0 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800153F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetGutterWidth@CortanaDesktopExperienceView@@AEAAHXZ @ 0x180016F94 (-GetGutterWidth@CortanaDesktopExperienceView@@AEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x18007A1D0 (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ApplyCortiniWindowRegion(
        CortanaDesktopExperienceView *this,
        HRGN a2,
        struct tagRECT *a3,
        HMONITOR a4)
{
  int v6; // esi
  CortanaDesktopExperienceView *v7; // rbx
  int v8; // r14d
  unsigned int GutterWidth; // eax
  HMONITOR v10; // r8
  __int64 v11; // r9
  int v12; // ebp
  HMONITOR v13; // r8
  HMONITOR v14; // r8
  int v15; // eax
  CortanaDesktopExperienceView *v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  LANGID ThreadUILanguage; // ax
  int v21; // ebx
  LANGID v22; // ax
  CortanaDesktopExperienceView *v23; // rcx
  int v24; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3->right - a3->left;
  v7 = this;
  v8 = a3->bottom - a3->top;
  GutterWidth = CortanaDesktopExperienceView::GetGutterWidth(this);
  v12 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)GutterWidth, v11, v10);
  LODWORD(v7) = v8 - CortanaDesktopExperienceView::GetSpeechTextInputHeight(v7, a4, v13);
  v15 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x87, (__int64)a4, v14);
  v17 = CortanaDesktopExperienceView::RemoveRectFromRegion(v16, a2, 0, 0, v6, (int)v7 - v15);
  if ( v17 < 0 )
  {
    v18 = 2071LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v17);
    return (unsigned int)v17;
  }
  ThreadUILanguage = GetThreadUILanguage();
  v21 = v12;
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
    v21 = v6;
  v22 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v22) )
    v24 = v6 - v12;
  else
    v24 = 0;
  v17 = CortanaDesktopExperienceView::RemoveRectFromRegion(v23, a2, v24, 0, v21, v8);
  if ( v17 < 0 )
  {
    v18 = 2078LL;
    goto LABEL_3;
  }
  return 0LL;
}
