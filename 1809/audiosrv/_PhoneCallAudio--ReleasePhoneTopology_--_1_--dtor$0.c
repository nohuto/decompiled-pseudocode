/*
 * XREFs of _PhoneCallAudio::ReleasePhoneTopology_::_1_::dtor$0 @ 0x18011C1BE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::ReleasePhoneTopology_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
