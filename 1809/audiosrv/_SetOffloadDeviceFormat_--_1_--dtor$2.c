/*
 * XREFs of _SetOffloadDeviceFormat_::_1_::dtor$2 @ 0x1800B2CA7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetOffloadDeviceFormat_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 112));
}
