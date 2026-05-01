/*
 * XREFs of ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x180299214
 * Callers:
 *     XamlLauncher_CreateInstance @ 0x18029EDD0 (XamlLauncher_CreateInstance.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180190980 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180190980.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x180299AE0 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x18029B468 (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  XamlLauncher *v5; // rax
  XamlLauncher *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  volatile int *v9; // rdx
  XamlLauncher *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (XamlLauncher *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = XamlLauncher::XamlLauncher(v5);
    v7 = *a2;
    v8 = (__int64)v6;
    v11 = v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v6 + 31, (v7 + 24) & -(__int64)(v7 != 0));
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::InternalAddRef(
        v8,
        v9);
    *a1 = v8;
    Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
