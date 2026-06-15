/*
 * XREFs of _CPolicyConfig::ConfirmDeviceFormat_::_1_::dtor$2 @ 0x1800CF5FA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::ConfirmDeviceFormat_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 64));
}
