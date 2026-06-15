/*
 * XREFs of _CPolicyConfig::DisconnectAllRenderEndpoints_::_1_::dtor$1 @ 0x1800D1F81
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::DisconnectAllRenderEndpoints_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 96));
}
