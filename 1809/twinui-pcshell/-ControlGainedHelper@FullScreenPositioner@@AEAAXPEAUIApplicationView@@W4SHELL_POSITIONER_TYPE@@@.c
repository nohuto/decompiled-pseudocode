/*
 * XREFs of ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180140C94
 * Callers:
 *     ?ControlGained@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180140AE0 (-ControlGained@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180140B70 (-ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180141B70 (-InitializePosition@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801406DC (-AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180141FF0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180142790 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180142A38 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

void __fastcall FullScreenPositioner::ControlGainedHelper(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+40h] [rbp+18h] BYREF

  FullScreenPositioner::SetPositionerMonitor(a2, *(struct IImmersiveMonitor **)(a1 + 232));
  if ( a3 != 3 )
  {
    v6 = FullScreenPositioner::AddView((FullScreenPositioner *)a1, a2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1123LL,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v6);
  }
  FullScreenPositioner::PositionView(a1, a2, 0LL);
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v13) >= 0 && v13 )
    FullScreenPositioner::SetVisibleView((FullScreenPositioner *)a1, a2);
  v7 = *(_QWORD *)(a1 + 288);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, unsigned int *))(*(_QWORD *)v7 + 64LL))(
           v7,
           a2,
           &v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1336LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_14;
    }
    v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)a2 + 432LL))(a2, v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1337LL;
      goto LABEL_10;
    }
  }
  v9 = 0;
LABEL_14:
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1139LL,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v9);
}
