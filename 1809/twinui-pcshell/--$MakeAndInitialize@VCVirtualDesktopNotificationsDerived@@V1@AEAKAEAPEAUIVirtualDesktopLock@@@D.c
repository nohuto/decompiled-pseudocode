/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopNotificationsDerived@@V1@AEAKAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopNotificationsDerived@@AEAKAEAPEAUIVirtualDesktopLock@@@Z @ 0x18037FB04
 * Callers:
 *     ?CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180380350 (-CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??0CVirtualDesktopNotificationsDerived@@QEAA@XZ @ 0x18037FFCC (--0CVirtualDesktopNotificationsDerived@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopNotificationsDerived,CVirtualDesktopNotificationsDerived,unsigned long &,IVirtualDesktopLock * &>(
        CVirtualDesktopNotificationsDerived **a1,
        int *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  CVirtualDesktopNotificationsDerived *v7; // rax
  CVirtualDesktopNotificationsDerived *v8; // rax
  int v9; // ecx
  CVirtualDesktopNotificationsDerived *v10; // rbx
  __int64 v11; // rdx
  CVirtualDesktopNotificationsDerived *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (CVirtualDesktopNotificationsDerived *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = CVirtualDesktopNotificationsDerived::CVirtualDesktopNotificationsDerived(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v13 = v8;
    *((_DWORD *)v8 + 26) = v9;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v8 + 7, v11);
    (*(void (__fastcall **)(CVirtualDesktopNotificationsDerived *))(*(_QWORD *)v10 + 8LL))(v10);
    *a1 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
