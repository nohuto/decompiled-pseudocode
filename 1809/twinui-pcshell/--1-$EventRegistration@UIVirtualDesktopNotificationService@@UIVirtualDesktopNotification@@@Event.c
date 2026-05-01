/*
 * XREFs of ??1?$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@EventRegistrationHelpers@@UEAA@XZ @ 0x18026AEBC
 * Callers:
 *     ??_G?$VirtualDesktopNotificationForwarderHelper@VVirtualDesktopNotificationRegistration@?A0x815bf8ac@@@@UEAAPEAXI@Z @ 0x1802EBB00 (--_G-$VirtualDesktopNotificationForwarderHelper@VVirtualDesktopNotificationRegistration@-A0x815b.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>::~EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 32));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
