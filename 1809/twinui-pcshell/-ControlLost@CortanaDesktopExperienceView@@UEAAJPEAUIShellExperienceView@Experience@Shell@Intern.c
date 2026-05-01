/*
 * XREFs of ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x180188670
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18001DD5C (-UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x180078E98 (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18018891C (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18018A0F0 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18018A1A4 (-ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
  *(_BYTE *)(a1 + 223) = 0;
  if ( *(_DWORD *)(a1 + 248) )
  {
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      *(_DWORD *)(a1 + 248) = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 264) )
  {
    v6 = CortanaDesktopExperienceView::PostTargetedMessage(a1, 2LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        434LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
  }
  CortanaDesktopExperienceView::UnregisterGlobalBackButton((CortanaDesktopExperienceView *)a1);
  CortanaDesktopExperienceView::UpdateSuggestionsShowing((CortanaDesktopExperienceView *)a1, 0);
  CortanaDesktopExperienceView::ResetCortanaWindowRegion((CortanaDesktopExperienceView *)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 160LL))(
    *(_QWORD *)(a1 + 168),
    *(_QWORD *)(a1 + 176));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 176LL))(
    *(_QWORD *)(a1 + 168),
    *(_QWORD *)(a1 + 184));
  v7 = *(_QWORD *)(a1 + 168);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 168) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
