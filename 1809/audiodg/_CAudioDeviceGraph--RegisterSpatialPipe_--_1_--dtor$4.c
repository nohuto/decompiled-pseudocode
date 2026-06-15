/*
 * XREFs of _CAudioDeviceGraph::RegisterSpatialPipe_::_1_::dtor$4 @ 0x140021000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::RegisterSpatialPipe_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 264);
}
