/*
 * XREFs of ?Destroy@CMultitaskingViewHotKeyHandler@@UEAAXXZ @ 0x1802E7D10
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x1802E84E4 (-_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ.c)
 */

void __fastcall CMultitaskingViewHotKeyHandler::Destroy(CMultitaskingViewHotKeyHandler *this)
{
  CMultitaskingViewHotKeyHandler::_UnregisterHotKeys(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
}
