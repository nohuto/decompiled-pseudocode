/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@@Z @ 0x1804115C4
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@@Z @ 0x180411410 (--$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180160EF8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator::RuntimeClassInitialize(
        VirtualDesktopSwitchAnimator *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopAnimationSyncNotificationServicePrivate *a3)
{
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v5; // rax
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 2, (__int64)a2);
  v5 = (struct IVirtualDesktopAnimationSyncNotificationServicePrivate *)*((_QWORD *)this + 3);
  if ( v5 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopAnimationSyncNotificationServicePrivate *))(*(_QWORD *)a3 + 8LL))(a3);
      v5 = (struct IVirtualDesktopAnimationSyncNotificationServicePrivate *)*((_QWORD *)this + 3);
    }
    v7 = v5;
    *((_QWORD *)this + 3) = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  }
  return 0LL;
}
