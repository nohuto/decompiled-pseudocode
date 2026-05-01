/*
 * XREFs of ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18002EE54
 * Callers:
 *     ?OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EE30 (-OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_.c)
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180067E7C (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18007A730 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x180334280 (-ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHEL.c)
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x180334470 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1803348B0 (-GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180334F50 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 *     ?RecoverPriorities@ShellPositionerManager@@AEAAJXZ @ 0x180335718 (-RecoverPriorities@ShellPositionerManager@@AEAAJXZ.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x180336B00 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 * Callees:
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180030220 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x18033A170 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerManager::GetPositionerPriorityForView(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IShellPositionerPriority **a3)
{
  struct IApplicationView *v6; // rdx
  unsigned int v7; // ebx
  _QWORD *v8; // rcx
  void *v10; // rcx
  HWND WindowForView; // rax
  const struct _GUID *v12; // rdx
  unsigned int PropW; // eax
  void *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  void *v20; // [rsp+48h] [rbp+18h] BYREF

  v18 = -2;
  if ( a3 )
    *a3 = 0LL;
  v20 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, void **))(*(_QWORD *)a2 + 264LL))(a2, &v20) >= 0 )
    goto LABEL_4;
  v10 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v20 = 0LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v6);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      v16 = PositionerPriority_CreateInstance(PropW, v12, &v20);
      if ( v16 >= 0 )
        goto LABEL_17;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C4,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v16,
        -2);
    }
  }
  v14 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = PositionerPriority_CreateInstance(*((unsigned int *)this + 36), v12, &v20);
  v7 = v15;
  if ( v15 < 0 )
  {
    v17 = 1017LL;
    goto LABEL_22;
  }
LABEL_17:
  v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, void *))(*(_QWORD *)a2 + 272LL))(a2, v20);
  v7 = v15;
  if ( v15 < 0 )
  {
    v17 = 1021LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v15,
      v18);
    goto LABEL_7;
  }
LABEL_4:
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    *a3 = (struct IShellPositionerPriority *)v20;
  }
  v7 = 0;
LABEL_7:
  v8 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
  }
  return v7;
}
