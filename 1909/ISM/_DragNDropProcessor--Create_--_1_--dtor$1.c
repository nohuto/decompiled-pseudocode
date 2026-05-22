/*
 * XREFs of _DragNDropProcessor::Create_::_1_::dtor$1 @ 0x18006ACE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragNDropProcessor::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 80));
}
