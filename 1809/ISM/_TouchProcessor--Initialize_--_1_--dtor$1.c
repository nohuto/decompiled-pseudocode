/*
 * XREFs of _TouchProcessor::Initialize_::_1_::dtor$1 @ 0x1801341F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchProcessor::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 80));
}
