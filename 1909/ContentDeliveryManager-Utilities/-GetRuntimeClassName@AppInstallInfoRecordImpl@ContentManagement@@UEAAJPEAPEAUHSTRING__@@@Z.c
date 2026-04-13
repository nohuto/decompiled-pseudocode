/*
 * XREFs of ?GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18001F3C0
 * Callers:
 *     ?GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180023E30 (-GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::AppInstallInfoRecordImpl::GetRuntimeClassName(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.AppInstallInfoRecord", 0x26u, a2);
}
