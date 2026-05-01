/*
 * XREFs of ?BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180162484
 * Callers:
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x180164E04 (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x1801615C8 (--$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEA.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180162898 (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 */

void __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow(
        CPeopleBarFlyoutExperienceManager::DebounceDetection *this)
{
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v2; // rcx
  struct CPeopleBarFlyoutExperienceManager::DebounceDetection *v3; // [rsp+38h] [rbp+10h] BYREF

  if ( GetAsyncKeyState(1) < 0 )
  {
    v3 = this;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
    Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection *>(
      (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification **)this + 1,
      &v3);
    if ( GetAsyncKeyState(1) < 0 )
      return;
    v2 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 1);
    *(_QWORD *)this = 0LL;
    if ( v2 )
    {
      CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
    }
  }
  *(_QWORD *)this = GetTickCount64();
}
