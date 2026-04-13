/*
 * XREFs of ?GetRuntimeClassName@LaunchManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000C4F0
 * Callers:
 *     ?GetRuntimeClassName@LaunchManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001E620 (-GetRuntimeClassName@LaunchManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::LaunchManager::GetRuntimeClassName(
        ContentManagement::LaunchManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.LaunchManager", 0x1Fu, a2);
}
