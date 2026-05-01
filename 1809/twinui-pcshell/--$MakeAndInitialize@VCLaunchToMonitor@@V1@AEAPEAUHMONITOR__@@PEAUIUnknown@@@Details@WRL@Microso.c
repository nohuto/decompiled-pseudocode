/*
 * XREFs of ??$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchToMonitor@@AEAPEAUHMONITOR__@@$$QEAPEAUIUnknown@@@Z @ 0x1803AD27C
 * Callers:
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1803ADA68 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CLaunchToMonitor@@QEAA@XZ @ 0x1803AD31C (--0CLaunchToMonitor@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLaunchToMonitor,CLaunchToMonitor,HMONITOR__ * &,IUnknown *>(
        CLaunchToMonitor **a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned int v3; // esi
  CLaunchToMonitor *v7; // rax
  CLaunchToMonitor *v8; // rax
  __int64 v9; // rbx
  CLaunchToMonitor *v10; // rdi
  CLaunchToMonitor *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (CLaunchToMonitor *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = CLaunchToMonitor::CLaunchToMonitor(v7);
    v9 = *a2;
    v10 = v8;
    v12 = v8;
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v8 + 2) + 24LL))((__int64)v8 + 16, *a3);
    *((_QWORD *)v10 + 8) = v9;
    (*(void (__fastcall **)(CLaunchToMonitor *))(*(_QWORD *)v10 + 8LL))(v10);
    *a1 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
