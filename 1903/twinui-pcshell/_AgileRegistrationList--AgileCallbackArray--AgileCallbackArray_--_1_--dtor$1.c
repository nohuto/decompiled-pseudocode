/*
 * XREFs of _AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor$1 @ 0x18008C815
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>(*(_QWORD *)(a2 + 80) + 48LL);
}
