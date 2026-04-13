/*
 * XREFs of ?GetRuntimeClassName@NotificationManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000BF90
 * Callers:
 *     ?GetRuntimeClassName@NotificationManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001E150 (-GetRuntimeClassName@NotificationManager@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::NotificationManager::GetRuntimeClassName(
        ContentManagement::NotificationManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.NotificationManager", 0x25u, a2);
}
