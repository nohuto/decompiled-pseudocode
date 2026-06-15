/*
 * XREFs of _TrackSystemEffectBehavior_::_1_::dtor$1 @ 0x140020280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TrackSystemEffectBehavior_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 112);
}
