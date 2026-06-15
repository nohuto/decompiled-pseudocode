/*
 * XREFs of _SetOffloadDeviceFormat_::_1_::dtor$1 @ 0x1800B2C9B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetOffloadDeviceFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 96));
}
