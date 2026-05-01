/*
 * XREFs of ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18033D390
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180028708 (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopPositioner::HandleRecoveryForView(CDesktopPositioner *this, struct IApplicationView *a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CDesktopPositioner::_UpdateViewTabState((CDesktopPositioner *)((char *)this - 136), a2);
  v3 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3EF,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)updated);
  return v3;
}
