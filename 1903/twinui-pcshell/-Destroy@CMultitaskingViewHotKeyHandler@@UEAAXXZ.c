/*
 * XREFs of ?Destroy@CMultitaskingViewHotKeyHandler@@UEAAXXZ @ 0x1803486C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x180348E94 (-_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ.c)
 */

void __fastcall CMultitaskingViewHotKeyHandler::Destroy(CMultitaskingViewHotKeyHandler *this)
{
  CMultitaskingViewHotKeyHandler::_UnregisterHotKeys(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
}
