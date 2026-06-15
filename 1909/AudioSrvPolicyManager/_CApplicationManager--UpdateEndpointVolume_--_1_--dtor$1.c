/*
 * XREFs of _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$1 @ 0x1800363E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::UpdateEndpointVolume_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioProcessNotification>::~CComPtr<IAudioProcessNotification>((__int64 *)(a2 + 112));
}
