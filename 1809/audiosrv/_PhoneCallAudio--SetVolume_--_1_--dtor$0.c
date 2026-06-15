/*
 * XREFs of _PhoneCallAudio::SetVolume_::_1_::dtor$0 @ 0x18011C43A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::SetVolume_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
