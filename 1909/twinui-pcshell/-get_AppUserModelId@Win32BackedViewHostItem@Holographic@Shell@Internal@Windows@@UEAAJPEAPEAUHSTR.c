/*
 * XREFs of ?get_AppUserModelId@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180236590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_AppUserModelId(
        HSTRING *this,
        HSTRING *a2)
{
  return WindowsDuplicateString(this[47], a2);
}
