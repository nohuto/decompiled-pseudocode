/*
 * XREFs of _RoutingTimer::InternalTimerCallback_::_1_::dtor$0 @ 0x180128FCE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RoutingTimer::InternalTimerCallback_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
