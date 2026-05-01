/*
 * XREFs of ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180036A6C
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180039980 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     _lambda_eca460099de968d8064ce761a289067f_::operator() @ 0x1803A0E88 (_lambda_eca460099de968d8064ce761a289067f_--operator().c)
 *     ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803A23C0 (-HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@W4VIEW_CHANGED_TAB_GROUP_FLAGS@@@Z @ 0x1803A4D80 (-ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@W4VIEW_CHANGED_TA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803A6078 (-_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CDesktopPositioner::_UpdateViewTabState(CDesktopPositioner *this, struct IApplicationView *a2)
{
  __int64 (__fastcall *v4)(struct IApplicationView *, bool); // rbx
  bool IsViewTabbed; // al
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 39) )
    return 0LL;
  v4 = *(__int64 (__fastcall **)(struct IApplicationView *, bool))(*(_QWORD *)a2 + 432LL);
  IsViewTabbed = CDesktopPositioner::_IsViewTabbed(this, a2);
  v6 = v4(a2, IsViewTabbed);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB6F,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v6,
    v8);
  return v7;
}
