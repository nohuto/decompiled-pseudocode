/*
 * XREFs of ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x1802F0E8C
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802F62F0 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ImmersiveMonitorHelper@@QEAA@XZ @ 0x1802F18EC (--0ImmersiveMonitorHelper@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1802F339C (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x1802F7748 (-RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherStat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
        volatile signed __int32 **a1,
        struct IServiceProvider **a2,
        struct IXamlLauncherState **a3)
{
  ImmersiveMonitorHelper *v6; // rax
  int v7; // edi
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = (ImmersiveMonitorHelper *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (volatile signed __int32 *)ImmersiveMonitorHelper::ImmersiveMonitorHelper(v6);
    v10 = v8;
    v11 = 0LL;
    v7 = ImmersiveMonitorHelper::RuntimeClassInitialize((ImmersiveMonitorHelper *)v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        _InterlockedIncrement(v8 + 15);
      *a1 = v8;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
