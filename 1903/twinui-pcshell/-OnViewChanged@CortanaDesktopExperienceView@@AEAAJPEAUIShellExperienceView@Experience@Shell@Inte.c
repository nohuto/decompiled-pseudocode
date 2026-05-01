/*
 * XREFs of ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18004E3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180039C10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18004E288 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18004FA70 (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180050E40 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180051000 (-OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnViewChanged(
        CortanaDesktopExperienceView *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x467,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4,
      v7);
    return v5;
  }
  else
  {
    switch ( v9 )
    {
      case 3:
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 104LL))(*((_QWORD *)this + 12));
        return 0LL;
      case 4:
        return CortanaDesktopExperienceView::OnViewCloaking(this);
      case 7:
        return CortanaDesktopExperienceView::OnViewHidden(this);
      case 8:
        return CortanaDesktopExperienceView::OnViewPropertiesChanging(this);
      case 9:
        return CortanaDesktopExperienceView::OnViewShown(this);
      case 10:
        return CortanaDesktopExperienceView::OnViewUncloaking(this);
      default:
        return 0LL;
    }
  }
}
