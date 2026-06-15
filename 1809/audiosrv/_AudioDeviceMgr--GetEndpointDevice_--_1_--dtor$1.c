/*
 * XREFs of _AudioDeviceMgr::GetEndpointDevice_::_1_::dtor$1 @ 0x1801420B7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::GetEndpointDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
