/*
 * XREFs of _VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor$6 @ 0x18039532F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator(a2 + 128);
}
