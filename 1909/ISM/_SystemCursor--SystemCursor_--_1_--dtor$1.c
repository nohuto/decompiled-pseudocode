/*
 * XREFs of _SystemCursor::SystemCursor_::_1_::dtor$1 @ 0x1800CB9DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SystemCursor::SystemCursor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::weak_ptr<SystemCursorService>::~weak_ptr<SystemCursorService>(*(_QWORD *)(a2 + 80));
}
