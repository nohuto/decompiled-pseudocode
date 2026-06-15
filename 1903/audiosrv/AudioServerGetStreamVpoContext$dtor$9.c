/*
 * XREFs of AudioServerGetStreamVpoContext$dtor$9 @ 0x1800E94DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerGetStreamVpoContext_dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 80));
}
