/*
 * XREFs of ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180080F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::OnViewPropertiesChanging(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  return CStartExperienceManager::PositionMenu((CStartExperienceManager *)((char *)this - 88), (__int64)a2, 0);
}
