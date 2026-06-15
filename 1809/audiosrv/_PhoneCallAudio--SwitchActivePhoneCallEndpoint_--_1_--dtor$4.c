/*
 * XREFs of _PhoneCallAudio::SwitchActivePhoneCallEndpoint_::_1_::dtor$4 @ 0x18011C8FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::SwitchActivePhoneCallEndpoint_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 64);
}
