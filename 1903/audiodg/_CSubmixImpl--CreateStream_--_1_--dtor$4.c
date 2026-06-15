/*
 * XREFs of _CSubmixImpl::CreateStream_::_1_::dtor$4 @ 0x14001A9C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::CreateStream_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ICrossProcessEventManager,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessEventManager,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
