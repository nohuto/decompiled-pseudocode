/*
 * XREFs of ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18008FFCC
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18008F258 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x18008FA04 (-BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?ObservedMouseButtonUp@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z @ 0x180090F50 (-ObservedMouseButtonUp@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@UEAAJUt.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1800932C4 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x18018E6EC (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ?BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18018ED58 (-BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1801917CC (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(
        CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *this)
{
  *((_QWORD *)this + 5) = 0LL;
  if ( *((_DWORD *)this + 14) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
    *((_DWORD *)this + 14) = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
}
