/*
 * XREFs of _DWMInputRouter::Initialize_::_1_::dtor$32 @ 0x180132375
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DWMInputRouter::Initialize_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 576));
}
