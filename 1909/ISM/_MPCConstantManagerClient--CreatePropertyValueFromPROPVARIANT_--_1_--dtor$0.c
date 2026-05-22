/*
 * XREFs of _MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT_::_1_::dtor$0 @ 0x18011C1DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
