/*
 * XREFs of _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$10 @ 0x180131769
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<WGIController>::~ComPtr<WGIController>((volatile signed __int64 **)(a2 + 48));
}
