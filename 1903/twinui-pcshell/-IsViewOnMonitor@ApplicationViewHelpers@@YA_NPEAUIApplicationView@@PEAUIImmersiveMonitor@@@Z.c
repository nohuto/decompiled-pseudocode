/*
 * XREFs of ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180063C20
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180063A70 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18016CC38 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180394EC0 (-GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ApplicationViewHelpers::IsViewOnMonitor(
        ApplicationViewHelpers *this,
        struct IApplicationView *a2,
        struct IImmersiveMonitor *a3)
{
  __int64 v3; // rax
  int v5; // eax
  char v6; // bl
  __int64 v7; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)this;
  v13 = 0LL;
  v5 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *, struct IImmersiveMonitor *))(v3 + 80))(
         this,
         &v13,
         a3);
  if ( v5 < 0 )
  {
    v9 = 181LL;
LABEL_11:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v5,
      v10);
    goto LABEL_8;
  }
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, int *))(*(_QWORD *)a2 + 96LL))(a2, v13, &v12);
  if ( v5 < 0 )
  {
    v9 = 182LL;
    goto LABEL_11;
  }
  if ( v12 )
  {
    v6 = 1;
    goto LABEL_5;
  }
LABEL_8:
  v6 = 0;
LABEL_5:
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
