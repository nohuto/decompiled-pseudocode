/*
 * XREFs of _BuildDeviceGraphForStream_::_1_::dtor$5 @ 0x180065DD2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildDeviceGraphForStream_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>>((__int64 **)(a2 + 104));
}
