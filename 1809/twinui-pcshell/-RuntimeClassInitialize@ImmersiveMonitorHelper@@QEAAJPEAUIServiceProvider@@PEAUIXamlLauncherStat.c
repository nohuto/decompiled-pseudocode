/*
 * XREFs of ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x18029F6B4
 * Callers:
 *     ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x18029915C (--$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18029F020 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ImmersiveMonitorHelper::RuntimeClassInitialize(
        ImmersiveMonitorHelper *this,
        struct IServiceProvider *a2,
        struct IXamlLauncherState *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF
  struct IImmersiveMonitor *v16; // [rsp+88h] [rbp+48h] BYREF

  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 10, (__int64)a3);
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v14 + 24LL))(
           v14,
           ((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
           (char *)this + 88);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 26LL;
      goto LABEL_7;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
    v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v14)(
           v14,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           (char *)this + 72);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 27LL;
      goto LABEL_7;
    }
    v16 = 0LL;
    v8 = *((_QWORD *)this + 9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v8 + 72LL))(
           v8,
           0LL,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v16);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
        (const char *)(unsigned int)v9);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      goto LABEL_18;
    }
    ImmersiveMonitorHelper::ConnectToMonitor(this, (struct IUnknown *)v16);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IActiveZBandNotificationForMonitorService,
            &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
            &v15);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v15 + 24LL))(
              v15,
              (char *)this + 32,
              (char *)this + 92);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v6 = 0;
        goto LABEL_16;
      }
      v11 = 34LL;
    }
    else
    {
      v11 = 33LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v10);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    goto LABEL_17;
  }
  v7 = 25LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
    (const char *)(unsigned int)v5);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v6;
}
