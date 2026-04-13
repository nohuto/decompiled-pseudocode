/*
 * XREFs of ?GetRuntimeClassName@MobilityExperienceSettings@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000EAC0
 * Callers:
 *     ?GetRuntimeClassName@MobilityExperienceSettings@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001E6A0 (-GetRuntimeClassName@MobilityExperienceSettings@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::MobilityExperienceSettings::GetRuntimeClassName(
        ContentManagement::MobilityExperienceSettings *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.MobilityExperienceSettings", 0x2Cu, a2);
}
