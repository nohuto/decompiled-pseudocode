/*
 * XREFs of ?GetRuntimeClassName@IdentityManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000D8D0
 * Callers:
 *     ?GetRuntimeClassName@IdentityManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001E4D0 (-GetRuntimeClassName@IdentityManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::IdentityManager::GetRuntimeClassName(
        ContentManagement::IdentityManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.IdentityManager", 0x21u, a2);
}
