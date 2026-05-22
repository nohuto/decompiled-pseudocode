/*
 * XREFs of _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$1 @ 0x1800A7854
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<WGIController>::~ComPtr<WGIController>((__int64 *)(a2 + 128));
}
