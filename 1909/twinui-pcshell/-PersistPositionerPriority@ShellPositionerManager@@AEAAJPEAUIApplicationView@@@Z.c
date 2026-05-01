/*
 * XREFs of ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18003BF28
 * Callers:
 *     ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x18003BDF4 (-UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority.c)
 *     ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803B4070 (-ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHEL.c)
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1803B4280 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1803B6A30 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 *     ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1803B6F54 (-UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerP.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18003F4E0 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801207DC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1803BE6B0 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerManager::PersistPositionerPriority(
        ShellPositionerManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int LastErrorFailHr; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  struct IApplicationView *v8; // rdx
  HWND v9; // rax
  wil::details *v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  struct IApplicationView *v14; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v26; // [rsp+58h] [rbp+28h] BYREF
  __int64 v27; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+38h]

  v24 = -2;
  v28 = 0LL;
  v26 = 0LL;
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), void **))(*a2)[33])(
         a2,
         &v26) >= 0 )
    goto LABEL_2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  v26 = 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v14);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      v18 = PositionerPriority_CreateInstance(PropW, v17, &v26);
      if ( v18 >= 0 )
        goto LABEL_25;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x501,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v18,
        -2);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  v20 = PositionerPriority_CreateInstance(*((unsigned int *)this + 36), v19, &v26);
  LastErrorFailHr = v20;
  if ( v20 < 0 )
  {
    v21 = 1073LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v20,
      v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    goto LABEL_7;
  }
LABEL_25:
  v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), void *))(*a2)[34])(
          a2,
          v26);
  LastErrorFailHr = v20;
  if ( v20 < 0 )
  {
    v21 = 1077LL;
    goto LABEL_24;
  }
LABEL_2:
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v26;
  if ( v26 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 8LL))(v26);
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v26;
  }
  v28 = v4;
  if ( v4 )
  {
    v26 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v4)[2])(v4);
  }
  LastErrorFailHr = 0;
LABEL_7:
  if ( LastErrorFailHr < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E4,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)LastErrorFailHr,
      v24);
    goto LABEL_14;
  }
  v27 = 0LL;
  v6 = (**v28)(v28, &GUID_12c8e92e_f569_48ec_9d4d_56b96469e294, &v27);
  LastErrorFailHr = v6;
  if ( v6 < 0 )
  {
    v22 = (unsigned int)v6;
    v23 = 1256LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v22,
      v24);
    goto LABEL_12;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27);
  v9 = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v8);
  if ( !v9 )
  {
    LastErrorFailHr = -2147023728;
    v22 = 2147943568LL;
    v23 = 1263LL;
    goto LABEL_30;
  }
  if ( SetPropW(v9, L"ShellPositionerManager:PriorityList", (HANDLE)v7) )
    LastErrorFailHr = 0;
  else
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v10);
LABEL_12:
  v11 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_14:
  v12 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
  }
  return (unsigned int)LastErrorFailHr;
}
