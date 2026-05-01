/*
 * XREFs of ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180046F80
 * Callers:
 *     ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180046DD0 (-FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TY.c)
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180047394 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180048578 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x180395344 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180397624 (-UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerP.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerManager::HandleFrameworkViewTypeChange(
        ShellPositionerManager *a1,
        unsigned int a2,
        struct IApplicationView *a3,
        __int64 a4)
{
  int PositionerPriorityForView; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r13d
  int PositionerForMonitor; // eax
  struct IShellPositionerPriority *v13; // rbx
  __int64 (__fastcall *v14)(struct IShellPositionerPriority *, __int64 *); // rdi
  int updated; // eax
  __int64 v16; // rdx
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  struct IShellPositionerPriority *v23; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v24[1] = -2LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(a1, a3, &v23);
  v9 = PositionerPriorityForView;
  if ( PositionerPriorityForView < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F3,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerPriorityForView,
      v20);
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v23 + 24LL))(v23);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           v10,
                           a4,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           &v22);
  v9 = PositionerForMonitor;
  if ( PositionerForMonitor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F8,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerForMonitor,
      v20);
    goto LABEL_6;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v22 + 56LL))(
          v22,
          a3,
          a2) )
  {
    v21 = 0LL;
    v13 = v23;
    v14 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, __int64 *))(*(_QWORD *)v23 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    updated = v14(v13, &v21);
    v9 = updated;
    if ( updated >= 0 )
    {
      v20 = a2;
      updated = ShellPositionerManager::UpdatePositionerPriorityForFrameworkViewType(a1, v21, a3, a4);
      v9 = updated;
      if ( updated >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
        v24[0] = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
        v18 = ShellPositionerManager::GetPositionerForMonitor(v17, a4, &GUID_ee010e17_919a_4068_868b_675acf787303, v24);
        v9 = v18;
        if ( v18 >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a3 + 272LL))(a3, v21);
          v9 = v18;
          if ( v18 >= 0 )
          {
            ShellPositionerManager::PerformPositionerHandoff(a1, a3, v10, v17);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
            goto LABEL_5;
          }
          v19 = 787LL;
        }
        else
        {
          v19 = 784LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v18,
          a2);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
LABEL_20:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        goto LABEL_6;
      }
      v16 = 779LL;
    }
    else
    {
      v16 = 776LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated,
      v20);
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v22 + 64LL))(v22, a3, a2);
LABEL_5:
  v9 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  return v9;
}
