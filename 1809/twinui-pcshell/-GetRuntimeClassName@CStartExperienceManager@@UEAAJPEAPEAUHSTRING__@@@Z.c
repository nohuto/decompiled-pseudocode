/*
 * XREFs of ?GetRuntimeClassName@CStartExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18016A130
 * Callers:
 *     ?GetRuntimeClassName@CStartExperienceManager@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18009EDF0 (-GetRuntimeClassName@CStartExperienceManager@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CStartExperienceManager@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18009EE00 (-GetRuntimeClassName@CStartExperienceManager@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CStartExperienceManager::GetRuntimeClassName(CStartExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.StartExperienceManager", 0x38u, a2);
}
