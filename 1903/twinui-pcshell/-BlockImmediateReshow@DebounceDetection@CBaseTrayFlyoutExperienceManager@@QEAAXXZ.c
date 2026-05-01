/*
 * XREFs of ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x18008FA04
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1800932C4 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x18008ECA4 (--$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18008FFCC (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 */

void __fastcall CBaseTrayFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow(
        CBaseTrayFlyoutExperienceManager::DebounceDetection *this)
{
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v2; // rcx
  struct CBaseTrayFlyoutExperienceManager::DebounceDetection *v3; // [rsp+38h] [rbp+10h] BYREF

  if ( GetAsyncKeyState(1) < 0 )
  {
    v3 = this;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
    Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification,CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification,CBaseTrayFlyoutExperienceManager::DebounceDetection *>(
      (__int64 *)this + 1,
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
