/*
 * XREFs of ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180051000
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18004E3C0 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18004E258 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180051D74 (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801D0850 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnViewShown(CortanaDesktopExperienceView *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v5; // eax
  int v6; // eax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)*((_QWORD *)this + 12);
  v3 = *v2;
  *(_OWORD *)v7 = *(_OWORD *)((char *)this + 196);
  (*(void (__fastcall **)(__int64 *, int *))(v3 + 96))(v2, v7);
  if ( *((_BYTE *)this + 296) )
  {
    v5 = CExperienceManagerAnimationHelper::End((CortanaDesktopExperienceView *)((char *)this + 320));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x57F,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v5,
        v7[0]);
    v6 = CortanaDesktopExperienceView::PostTargetedMessage(this, 2LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x580,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6,
        v7[0]);
  }
  if ( !*((_BYTE *)this + 239) )
    CortanaDesktopExperienceView::RegisterGlobalBackButton(this);
  return 0LL;
}
