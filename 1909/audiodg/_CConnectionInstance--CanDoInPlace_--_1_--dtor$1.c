/*
 * XREFs of _CConnectionInstance::CanDoInPlace_::_1_::dtor$1 @ 0x14001A2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::CanDoInPlace_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 80);
}
