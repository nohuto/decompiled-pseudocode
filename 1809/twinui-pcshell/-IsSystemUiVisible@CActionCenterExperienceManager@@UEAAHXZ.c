/*
 * XREFs of ?IsSystemUiVisible@CActionCenterExperienceManager@@UEAAHXZ @ 0x180149A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CActionCenterExperienceManager::IsSystemUiVisible(CActionCenterExperienceManager *this)
{
  return *((_DWORD *)this + 30) == 2;
}
