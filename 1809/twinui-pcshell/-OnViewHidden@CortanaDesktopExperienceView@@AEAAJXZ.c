/*
 * XREFs of ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180078E0C
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18000FDB0 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18000C508 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000FFA4 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x180078E98 (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x180078ED4 (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18018A0F0 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnViewHidden(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_WORD *)this + 111) = 0;
  *((_BYTE *)this + 221) = 0;
  *((_BYTE *)this + 226) = 0;
  v2 = CortanaDesktopExperienceView::SetZBand(this, 13LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x441,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2,
      v8);
  if ( *((_BYTE *)this + 264) )
  {
    v4 = CortanaDesktopExperienceView::PostTargetedMessage(this, 2LL);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x445,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v4,
        v8);
  }
  CortanaDesktopExperienceView::UpdateSuggestionsShowing(this, 0);
  if ( *((_BYTE *)this + 220)
    && (*((_BYTE *)this + 220) = 0,
        v5 = CortanaDesktopExperienceView::NotifyView(this, L"NotifyAppTransitionCanceled", 0LL),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x450,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 88LL))(*((_QWORD *)this + 12));
    if ( *((_BYTE *)this + 264) )
    {
      v7 = CExperienceManagerAnimationHelper::End((CortanaDesktopExperienceView *)((char *)this + 320));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x457,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v7,
          v8);
    }
    return 0LL;
  }
}
