/*
 * XREFs of ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18007DC70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180047394 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180048578 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::GetPositionerForView(
        ShellPositionerManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall *v8)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v9; // ebx
  ShellPositionerManager *v10; // rbx
  int v11; // edi
  int PositionerPriorityForView; // eax
  int PositionerForMonitor; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IShellPositionerPriority *v18; // [rsp+58h] [rbp+10h] BYREF
  IUnknown *v19; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v19 = 0LL;
  v8 = (*a2)[10];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), IUnknown **))v8)(
         a2,
         &v19);
  if ( v9 >= 0 )
  {
    v10 = (ShellPositionerManager *)((char *)this - 88);
    v11 = 9;
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(v10, a2, &v18);
    v9 = PositionerPriorityForView;
    if ( PositionerPriorityForView < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41B,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerPriorityForView);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v18 + 24LL))(v18);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
      v9 = 0;
    }
    if ( v9 < 0 )
    {
      v15 = (unsigned int)v9;
      v16 = 371LL;
    }
    else
    {
      PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(v11, v19, a3, a4);
      v9 = PositionerForMonitor;
      if ( PositionerForMonitor >= 0 )
      {
        v9 = 0;
        goto LABEL_7;
      }
      v15 = (unsigned int)PositionerForMonitor;
      v16 = 373LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v15);
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  return (unsigned int)v9;
}
