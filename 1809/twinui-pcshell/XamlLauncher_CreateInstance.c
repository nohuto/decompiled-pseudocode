/*
 * XREFs of XamlLauncher_CreateInstance @ 0x18029EDD0
 * Callers:
 *     ?CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18029A840 (-CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_180080890.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x180299214 (--$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x180299BF0 (--0XamlLauncherState@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18029A4A8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18029A4A8.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x18029B468 (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall XamlLauncher_CreateInstance(_QWORD *a1)
{
  __int64 v2; // rbx
  XamlLauncherState *v3; // rax
  XamlLauncherState *v4; // rdi
  XamlLauncherState *v5; // rax
  int v6; // eax
  int CanCastTo; // edi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  volatile int *v11; // rcx
  volatile int *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v15; // [rsp+30h] [rbp+8h] BYREF
  XamlLauncherState *v16; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (XamlLauncherState *)operator new(0x420uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x420uLL);
    v5 = XamlLauncherState::XamlLauncherState(v4);
    v2 = (__int64)v5;
    if ( v5 )
    {
      v15 = 0LL;
      v16 = v5;
      Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease(&v15);
      v6 = Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(
             (__int64 *)&v15,
             (__int64 *)&v16);
      CanCastTo = v6;
      if ( v6 >= 0 )
      {
        *a1 = 0LL;
        if ( InlineIsEqualGUID(&GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &GUID_00000000_0000_0000_c000_000000000046) )
        {
          v11 = v15;
          *a1 = v15;
          (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v11 + 8LL))(v11);
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback>>::CanCastTo(
                        (__int64)v15,
                        v10,
                        a1);
          if ( CanCastTo >= 0 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
        }
        if ( CanCastTo >= 0 )
          goto LABEL_12;
        v8 = (unsigned int)CanCastTo;
        v9 = 79LL;
      }
      else
      {
        v8 = (unsigned int)v6;
        v9 = 78LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)v8);
LABEL_12:
      Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease(&v15);
      goto LABEL_14;
    }
  }
  CanCastTo = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4C,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)0x8007000ELL);
LABEL_14:
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::Release(
      v2,
      v12);
  return (unsigned int)CanCastTo;
}
