/*
 * XREFs of ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180028708
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180027F40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     _lambda_a4c092b385a4fac3af45bae97c388695_::operator() @ 0x18033BE28 (_lambda_a4c092b385a4fac3af45bae97c388695_--operator().c)
 *     ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18033D390 (-HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x18033FB70 (-ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180341138 (-_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CDesktopPositioner::_UpdateViewTabState(CDesktopPositioner *this, struct IApplicationView *a2)
{
  __int64 v4; // rbx
  bool IsViewTabbed; // al
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 39) )
    return 0LL;
  v4 = *(_QWORD *)a2;
  IsViewTabbed = CDesktopPositioner::_IsViewTabbed(this, a2);
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, bool))(v4 + 432))(a2, IsViewTabbed);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB60,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v6,
    v8);
  return v7;
}
