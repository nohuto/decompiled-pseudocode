/*
 * XREFs of ?OnDismiss@CortanaDesktopExperienceView@@EEAAJXZ @ 0x1801EF5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801EE8AC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnDismiss(CortanaDesktopExperienceView *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)((char *)this - 32));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3CE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v1);
  return 0LL;
}
