/*
 * XREFs of ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18007A730
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18002EE54 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18002FBD4 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::GetPositionerForView(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v8; // ebx
  int v9; // edi
  int PositionerPriorityForView; // eax
  int PositionerForMonitor; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IShellPositionerPriority *v16; // [rsp+68h] [rbp+10h] BYREF
  IUnknown *v17; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a2 + 80LL))(a2, &v17);
  if ( v8 >= 0 )
  {
    v9 = 9;
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                  (ShellPositionerManager *)((char *)this - 88),
                                  a2,
                                  &v16);
    v8 = PositionerPriorityForView;
    if ( PositionerPriorityForView < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E3,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerPriorityForView);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v16 + 24LL))(v16);
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    if ( v8 < 0 )
    {
      v13 = (unsigned int)v8;
      v14 = 343LL;
    }
    else
    {
      PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(v9, v17, a3, a4);
      v8 = PositionerForMonitor;
      if ( PositionerForMonitor >= 0 )
      {
        v8 = 0;
        goto LABEL_7;
      }
      v13 = (unsigned int)PositionerForMonitor;
      v14 = 345LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v13);
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v8;
}
