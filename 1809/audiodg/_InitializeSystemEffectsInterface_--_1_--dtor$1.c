/*
 * XREFs of _InitializeSystemEffectsInterface_::_1_::dtor$1 @ 0x14001F6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeSystemEffectsInterface_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 48);
}
