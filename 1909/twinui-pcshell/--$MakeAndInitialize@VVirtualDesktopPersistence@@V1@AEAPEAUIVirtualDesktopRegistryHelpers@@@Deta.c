/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x180407A20
 * Callers:
 *     ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x18040869C (-VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A8AA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180160EF8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??0VirtualDesktopPersistence@@QEAA@XZ @ 0x180407AB0 (--0VirtualDesktopPersistence@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ @ 0x180407BF0 (-InternalRelease@-$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPersistence,VirtualDesktopPersistence,IVirtualDesktopRegistryHelpers * &>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  VirtualDesktopPersistence *v5; // rax
  VirtualDesktopPersistence *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  volatile int *v9; // rdx
  VirtualDesktopPersistence *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (VirtualDesktopPersistence *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = VirtualDesktopPersistence::VirtualDesktopPersistence(v5);
    v7 = *a2;
    v8 = (__int64)v6;
    v11 = v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v6 + 2, v7);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
        v8,
        v9);
    *a1 = v8;
    Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
