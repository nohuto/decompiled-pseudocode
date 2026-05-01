/*
 * XREFs of ?get_IsVisible@CControlCenterExperienceManager@@UEAAJPEAE@Z @ 0x18019ABB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CControlCenterExperienceManager::get_IsVisible(CControlCenterExperienceManager *this, bool *a2)
{
  *a2 = *((_DWORD *)this + 30) == 2;
  return 0LL;
}
