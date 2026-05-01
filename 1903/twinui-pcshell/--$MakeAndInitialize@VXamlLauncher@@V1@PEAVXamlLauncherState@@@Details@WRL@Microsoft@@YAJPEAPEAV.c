/*
 * XREFs of ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x1802F0F40
 * Callers:
 *     XamlLauncher_CreateInstance @ 0x1802F6E54 (XamlLauncher_CreateInstance.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1802F1994 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x1802F33C0 (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(
        XamlLauncher **a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  XamlLauncher *v5; // rax
  XamlLauncher *v6; // rax
  __int64 v7; // rcx
  XamlLauncher *v8; // rdi
  XamlLauncher *v10; // [rsp+40h] [rbp+8h] BYREF
  XamlLauncher *v11; // [rsp+50h] [rbp+18h]

  v4 = 0;
  *a1 = 0LL;
  v5 = (XamlLauncher *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v5;
  if ( v5 )
  {
    v6 = XamlLauncher::XamlLauncher(v5);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v6 + 34, (v7 + 24) & -(__int64)(v7 != 0));
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)v8 + 27);
    *a1 = v8;
    Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
