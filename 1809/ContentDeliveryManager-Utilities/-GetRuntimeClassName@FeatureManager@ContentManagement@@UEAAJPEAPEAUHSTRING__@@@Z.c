/*
 * XREFs of ?GetRuntimeClassName@FeatureManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000D5A0
 * Callers:
 *     ?GetRuntimeClassName@FeatureManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001EA70 (-GetRuntimeClassName@FeatureManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::FeatureManager::GetRuntimeClassName(
        ContentManagement::FeatureManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.FeatureManager", 0x20u, a2);
}
