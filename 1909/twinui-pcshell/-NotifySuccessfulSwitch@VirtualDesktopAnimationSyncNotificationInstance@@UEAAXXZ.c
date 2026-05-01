/*
 * XREFs of ?NotifySuccessfulSwitch@VirtualDesktopAnimationSyncNotificationInstance@@UEAAXXZ @ 0x180088B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopAnimationSyncNotificationInstance::NotifySuccessfulSwitch(
        VirtualDesktopAnimationSyncNotificationInstance *this)
{
  *(_BYTE *)(*((_QWORD *)this + 2) + 40LL) = 1;
}
