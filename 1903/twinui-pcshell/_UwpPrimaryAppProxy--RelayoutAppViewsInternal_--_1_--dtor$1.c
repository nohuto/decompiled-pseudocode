/*
 * XREFs of _UwpPrimaryAppProxy::RelayoutAppViewsInternal_::_1_::dtor$1 @ 0x18039E351
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpPrimaryAppProxy::RelayoutAppViewsInternal_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::~list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>(a2 + 32);
}
