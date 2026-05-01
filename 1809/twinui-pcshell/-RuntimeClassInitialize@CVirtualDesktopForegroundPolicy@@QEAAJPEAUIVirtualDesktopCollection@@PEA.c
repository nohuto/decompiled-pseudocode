/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopForegroundPolicy@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x180384A68
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x1803842B0 (--$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 */

__int64 __fastcall CVirtualDesktopForegroundPolicy::RuntimeClassInitialize(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktopCollection *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IVirtualDesktopDefaultForegroundHandler *a4)
{
  struct IVirtualDesktopDefaultForegroundHandler *v7; // rax
  struct IVirtualDesktopDefaultForegroundHandler *v9; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 2, (__int64)a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 3, (__int64)a3);
  v7 = (struct IVirtualDesktopDefaultForegroundHandler *)*((_QWORD *)this + 4);
  if ( v7 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopDefaultForegroundHandler *))(*(_QWORD *)a4 + 8LL))(a4);
      v7 = (struct IVirtualDesktopDefaultForegroundHandler *)*((_QWORD *)this + 4);
    }
    v9 = v7;
    *((_QWORD *)this + 4) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  return 0LL;
}
