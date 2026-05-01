/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x1803EA1C8
 * Callers:
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x1803EA490 (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1803D2A68 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktopForegroundPolicy@@QEAA@XZ @ 0x1803EA268 (--0CVirtualDesktopForegroundPolicy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopForegroundPolicy@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x1803EA988 (-RuntimeClassInitialize@CVirtualDesktopForegroundPolicy@@QEAAJPEAUIVirtualDesktopCollection@@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopForegroundPolicy,CVirtualDesktopForegroundPolicy,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopDefaultForegroundHandler * &>(
        volatile signed __int32 **a1,
        struct IVirtualDesktopCollection **a2,
        struct IVirtualDesktopVisibilityPolicy **a3,
        struct IVirtualDesktopDefaultForegroundHandler **a4)
{
  CVirtualDesktopForegroundPolicy *v8; // rax
  int v9; // edi
  volatile signed __int32 *v10; // rax
  struct IVirtualDesktopDefaultForegroundHandler *v11; // r9
  struct IVirtualDesktopVisibilityPolicy *v12; // r8
  volatile signed __int32 *v13; // rbx
  struct IVirtualDesktopCollection *v14; // rdx
  volatile signed __int32 *v16; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CVirtualDesktopForegroundPolicy *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (volatile signed __int32 *)CVirtualDesktopForegroundPolicy::CVirtualDesktopForegroundPolicy(v8);
    v11 = *a4;
    v12 = *a3;
    v13 = v10;
    v14 = *a2;
    v16 = v10;
    v9 = CVirtualDesktopForegroundPolicy::RuntimeClassInitialize((CVirtualDesktopForegroundPolicy *)v10, v14, v12, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        _InterlockedIncrement(v13 + 3);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
