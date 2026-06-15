/*
 * XREFs of _AudioDeviceMgr::AddEndpointDevice_::_1_::dtor$0 @ 0x18006DC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::AddEndpointDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((void *)(a2 + 32));
}
