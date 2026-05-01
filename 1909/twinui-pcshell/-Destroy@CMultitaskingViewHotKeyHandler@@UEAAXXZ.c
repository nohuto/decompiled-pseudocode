/*
 * XREFs of ?Destroy@CMultitaskingViewHotKeyHandler@@UEAAXXZ @ 0x180367E30
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x180368604 (-_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ.c)
 */

void __fastcall CMultitaskingViewHotKeyHandler::Destroy(CMultitaskingViewHotKeyHandler *this)
{
  CMultitaskingViewHotKeyHandler::_UnregisterHotKeys(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
}
