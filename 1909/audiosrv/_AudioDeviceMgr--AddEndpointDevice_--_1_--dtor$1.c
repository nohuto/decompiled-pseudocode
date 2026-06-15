/*
 * XREFs of _AudioDeviceMgr::AddEndpointDevice_::_1_::dtor$1 @ 0x180071E48
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::AddEndpointDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((void *)(a2 + 40));
}
