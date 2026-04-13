/*
 * XREFs of ?GetRuntimeClassName@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18001F1C0
 * Callers:
 *     ?GetRuntimeClassName@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180023960 (-GetRuntimeClassName@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementBrokerServer::GetRuntimeClassName(
        ContentManagement::ContentManagementBrokerServer *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContentManagementBroker", 0x29u, a2);
}
