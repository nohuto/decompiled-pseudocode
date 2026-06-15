/*
 * XREFs of _EndpointCollection::AddDevice_::_1_::dtor$0 @ 0x18006F9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointCollection::AddDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
