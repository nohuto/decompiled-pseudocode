/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x1804098F8
 * Callers:
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180409BC0 (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A8AA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F2054 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktopForegroundPolicy@@QEAA@XZ @ 0x180409998 (--0CVirtualDesktopForegroundPolicy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopForegroundPolicy@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x18040A0B8 (-RuntimeClassInitialize@CVirtualDesktopForegroundPolicy@@QEAAJPEAUIVirtualDesktopCollection@@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopForegroundPolicy,CVirtualDesktopForegroundPolicy,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopDefaultForegroundHandler * &>(
        __int64 *a1,
        struct IVirtualDesktopCollection **a2,
        struct IVirtualDesktopVisibilityPolicy **a3,
        struct IVirtualDesktopDefaultForegroundHandler **a4)
{
  CVirtualDesktopForegroundPolicy *v8; // rax
  int v9; // ebx
  volatile int *v10; // rax
  struct IVirtualDesktopDefaultForegroundHandler *v11; // r9
  struct IVirtualDesktopVisibilityPolicy *v12; // r8
  __int64 v13; // rdi
  struct IVirtualDesktopCollection *v14; // rdx
  volatile int *v15; // rdx
  volatile int *v17; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CVirtualDesktopForegroundPolicy *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (volatile int *)CVirtualDesktopForegroundPolicy::CVirtualDesktopForegroundPolicy(v8);
    v11 = *a4;
    v12 = *a3;
    v13 = (__int64)v10;
    v14 = *a2;
    v17 = v10;
    v9 = CVirtualDesktopForegroundPolicy::RuntimeClassInitialize((CVirtualDesktopForegroundPolicy *)v10, v14, v12, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
          v13,
          v15);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
