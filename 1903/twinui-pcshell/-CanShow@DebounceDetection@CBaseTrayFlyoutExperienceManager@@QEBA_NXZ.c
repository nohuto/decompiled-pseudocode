/*
 * XREFs of ?CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ @ 0x18008FCA0
 * Callers:
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@@Z @ 0x180092AC8 (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@@Z.c)
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z @ 0x180092B88 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z.c)
 *     ?IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z @ 0x18018F800 (-IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x180190BB0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseTrayFlyoutExperienceManager::DebounceDetection::CanShow(
        CBaseTrayFlyoutExperienceManager::DebounceDetection *this)
{
  return GetTickCount64() - *(_QWORD *)this > 0x64;
}
