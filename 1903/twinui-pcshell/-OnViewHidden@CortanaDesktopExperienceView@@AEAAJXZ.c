/*
 * XREFs of ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180050E40
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18004E3C0 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18003DFD4 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180042860 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18004E258 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x180050EF0 (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x180050FA4 (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801D0850 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnViewHidden(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_WORD *)this + 119) = 0;
  *((_BYTE *)this + 237) = 0;
  *((_BYTE *)this + 242) = 0;
  v2 = CortanaDesktopExperienceView::SetZBand(this, 13LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x501,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2,
      v8);
  if ( *((_BYTE *)this + 296) )
  {
    v6 = CortanaDesktopExperienceView::PostTargetedMessage(this, 2LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x505,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6,
        v8);
  }
  CortanaDesktopExperienceView::UpdateSuggestionsShowing(this, 0);
  if ( *((_BYTE *)this + 236)
    && (*((_BYTE *)this + 236) = 0,
        v3 = CortanaDesktopExperienceView::NotifyView(this, L"NotifyAppTransitionCanceled", 0LL),
        v4 = v3,
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x510,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3,
      v8);
    return v4;
  }
  else
  {
    if ( *((_BYTE *)this + 296) )
    {
      v7 = CExperienceManagerAnimationHelper::End((CortanaDesktopExperienceView *)((char *)this + 352));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x515,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v7,
          v8);
    }
    *((_DWORD *)this + 62) = 2;
    CortanaDesktopExperienceView::PositionCortanaWindow(this, 1, 0);
    return 0LL;
  }
}
