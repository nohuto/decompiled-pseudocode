/*
 * XREFs of _GestureRecognizerCreate_::_1_::dtor$0 @ 0x18010A650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GestureRecognizerCreate_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 64));
}
