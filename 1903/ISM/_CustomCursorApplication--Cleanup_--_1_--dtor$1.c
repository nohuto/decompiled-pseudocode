/*
 * XREFs of _CustomCursorApplication::Cleanup_::_1_::dtor$1 @ 0x1800CC1F5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CustomCursorApplication::Cleanup_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::shared_ptr<SystemCursor>::~shared_ptr<SystemCursor>(a2 + 40);
}
