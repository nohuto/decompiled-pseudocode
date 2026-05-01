/*
 * XREFs of ?Begin@ViewAnimationStoryboardHelper@@QEAAJPEAUIApplicationView@@W4DWMTRANSITION_TARGET@@@Z @ 0x180206888
 * Callers:
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x180207170 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Begin@ViewAnimationStoryboardHelper@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1802067E0 (-Begin@ViewAnimationStoryboardHelper@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewAnimationStoryboardHelper::Begin(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        unsigned int a3)
{
  __int64 WindowForView; // rax
  int v6; // eax
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  v6 = ViewAnimationStoryboardHelper::Begin(a1, WindowForView, a3);
  v7 = v6;
  if ( v6 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewanimationstoryboardhelper.h",
      (const char *)(unsigned int)v6);
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewanimationstoryboardhelper.h",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
