/*
 * XREFs of _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$0 @ 0x180391FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualPinnedAppsHandler::PinAppID_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)(a2 + 104));
}
