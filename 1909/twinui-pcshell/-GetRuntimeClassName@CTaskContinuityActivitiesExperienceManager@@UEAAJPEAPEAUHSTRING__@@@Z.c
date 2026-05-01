/*
 * XREFs of ?GetRuntimeClassName@CTaskContinuityActivitiesExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801A26A0
 * Callers:
 *     ?GetRuntimeClassName@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800D7700 (-GetRuntimeClassName@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CTaskContinuityActivitiesExperienceManager::GetRuntimeClassName(
        CTaskContinuityActivitiesExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.TaskContinuityActivitiesExperienceManager", 0x4Bu, a2);
}
