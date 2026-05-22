/*
 * XREFs of _CreateSystemInputRouter_::_1_::dtor$3 @ 0x18012DE71
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreateSystemInputRouter_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 248));
}
