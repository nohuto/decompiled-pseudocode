/*
 * XREFs of _PhoneCallAudio::OnEndpointDeviceRemoved_::_1_::dtor$1 @ 0x18011BC5A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::OnEndpointDeviceRemoved_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
