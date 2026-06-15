/*
 * XREFs of _CDefaultDeviceManager::GetDefaultEndpoint_::_1_::dtor$2 @ 0x18006E240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDefaultDeviceManager::GetDefaultEndpoint_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((void *)(a2 + 128));
}
