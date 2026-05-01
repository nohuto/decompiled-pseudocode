/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x180387450
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18038510C (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 */

__int64 __fastcall CVirtualDesktopManager::RuntimeClassInitialize(
        CVirtualDesktopManager *this,
        struct IVirtualDesktopCollection *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IVirtualDesktopNotification *a4,
        struct IVirtualDesktopForegroundPolicy *a5,
        struct IVirtualDesktopPersistence *a6,
        struct IVirtualDesktopGroupedViewsPolicy *a7,
        struct IVirtualDesktopLock *a8)
{
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 10, (__int64)a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 12, (__int64)a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 13, (__int64)a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 14, (__int64)a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 15, (__int64)a6);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 16, (__int64)a7);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 17, (__int64)a8);
  v11 = *((_QWORD *)this + 10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v11 + 72LL))(
          v11,
          0LL,
          5LL,
          &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4,
          (char *)this + 144);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x298,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v12);
  return v13;
}
