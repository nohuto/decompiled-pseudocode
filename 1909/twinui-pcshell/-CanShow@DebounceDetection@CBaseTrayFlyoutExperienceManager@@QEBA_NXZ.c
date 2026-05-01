/*
 * XREFs of ?CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ @ 0x180097A04
 * Callers:
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@@Z @ 0x18009A5A8 (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@@Z.c)
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z @ 0x18009A668 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z.c)
 *     ?IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z @ 0x1801AE8D0 (-IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x1801AFCA0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseTrayFlyoutExperienceManager::DebounceDetection::CanShow(
        CBaseTrayFlyoutExperienceManager::DebounceDetection *this)
{
  return GetTickCount64() - *(_QWORD *)this > 0x64;
}
