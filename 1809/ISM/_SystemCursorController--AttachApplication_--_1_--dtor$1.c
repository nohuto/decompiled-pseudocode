/*
 * XREFs of _SystemCursorController::AttachApplication_::_1_::dtor$1 @ 0x1801327E2
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SystemCursorController::AttachApplication_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 48), (const struct std::nothrow_t *)0x80);
}
