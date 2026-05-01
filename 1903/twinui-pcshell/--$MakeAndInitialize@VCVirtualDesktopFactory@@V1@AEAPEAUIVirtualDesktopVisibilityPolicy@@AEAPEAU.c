/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803E7480
 * Callers:
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E7580 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180378864 (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktopFactory@@QEAA@XZ @ 0x1803E7520 (--0CVirtualDesktopFactory@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopFactory,CVirtualDesktopFactory,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
        CVirtualDesktopFactory **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v3; // esi
  CVirtualDesktopFactory *v7; // rax
  CVirtualDesktopFactory *v8; // rax
  __int64 v9; // rdx
  CVirtualDesktopFactory *v10; // rdi
  __int64 v11; // rbx
  CVirtualDesktopFactory *v13; // [rsp+40h] [rbp+8h] BYREF
  CVirtualDesktopFactory *v14; // [rsp+58h] [rbp+20h]

  v3 = 0;
  *a1 = 0LL;
  v7 = (CVirtualDesktopFactory *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v7;
  if ( v7 )
  {
    v8 = CVirtualDesktopFactory::CVirtualDesktopFactory(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v13 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v8 + 2, v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v10 + 3, v11);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)v10 + 3);
    *a1 = v10;
    Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((volatile signed __int32 **)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
