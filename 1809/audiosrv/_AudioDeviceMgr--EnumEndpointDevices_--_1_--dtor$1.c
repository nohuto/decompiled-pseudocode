/*
 * XREFs of _AudioDeviceMgr::EnumEndpointDevices_::_1_::dtor$1 @ 0x18006D530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::EnumEndpointDevices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((void *)(a2 + 104));
}
