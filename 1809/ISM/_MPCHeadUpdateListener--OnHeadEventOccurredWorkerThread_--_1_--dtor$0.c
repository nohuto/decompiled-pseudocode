/*
 * XREFs of _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$0 @ 0x180130D9A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a2 + 248));
}
