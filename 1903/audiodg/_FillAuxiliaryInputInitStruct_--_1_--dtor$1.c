/*
 * XREFs of _FillAuxiliaryInputInitStruct_::_1_::dtor$1 @ 0x14002963D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FillAuxiliaryInputInitStruct_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 48));
}
