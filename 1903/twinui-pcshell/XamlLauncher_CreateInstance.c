/*
 * XREFs of XamlLauncher_CreateInstance @ 0x1802F6E54
 * Callers:
 *     ?CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F26A0 (-CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIXamlLauncherState@@UIImmersiveLauncherCortana@@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180082FA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_180082FA0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x1802F0F40 (--$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x1802F1A8C (--0XamlLauncherState@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802F2318 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1802F2318.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x1802F33C0 (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall XamlLauncher_CreateInstance(_QWORD *a1)
{
  XamlLauncherState *v2; // rbx
  XamlLauncherState *v3; // rax
  volatile signed __int32 *v4; // rsi
  XamlLauncherState *v5; // rdi
  int CanCastTo; // ebx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  XamlLauncher *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  XamlLauncher *v14; // [rsp+40h] [rbp+8h] BYREF
  XamlLauncherState *v15; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (XamlLauncherState *)operator new(0x430uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x430uLL);
    v2 = XamlLauncherState::XamlLauncherState(v5);
    v4 = (volatile signed __int32 *)v2;
  }
  if ( !v4 )
  {
    CanCastTo = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_15;
  }
  v14 = 0LL;
  v15 = v2;
  Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease((volatile signed __int32 **)&v14);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(&v14, (__int64 *)&v15);
  CanCastTo = v7;
  if ( v7 >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v11 = v14;
      *a1 = v14;
      (*(void (__fastcall **)(XamlLauncher *))(*(_QWORD *)v11 + 8LL))(v11);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer>>::CanCastTo(
                    (__int64)v14,
                    v10,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    if ( CanCastTo >= 0 )
      goto LABEL_14;
    v8 = (unsigned int)CanCastTo;
    v9 = 82LL;
  }
  else
  {
    v8 = (unsigned int)v7;
    v9 = 81LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)v8);
LABEL_14:
  Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease((volatile signed __int32 **)&v14);
LABEL_15:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::Release(v4);
  return (unsigned int)CanCastTo;
}
