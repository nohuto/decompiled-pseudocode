/*
 * XREFs of _CVirtualDesktopHotkeyHandler::_RemoveDesktop_::_1_::dtor$0 @ 0x18038C92C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopHotkeyHandler::_RemoveDesktop_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)(a2 + 112));
}
