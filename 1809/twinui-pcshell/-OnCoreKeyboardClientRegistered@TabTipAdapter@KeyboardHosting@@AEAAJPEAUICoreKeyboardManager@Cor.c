/*
 * XREFs of ?OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@45678@@Z @ 0x1802C3310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardClientRegistered(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs *a3)
{
  *((_BYTE *)this + 304) = 1;
  return KeyboardHosting::TabTipAdapter::ExecutePendingRequest(this);
}
