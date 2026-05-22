/*
 * XREFs of _WGIController::NotifyInputReport_::_1_::dtor$1 @ 0x1800AABBA
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall WGIController::NotifyInputReport_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 112), (const struct std::nothrow_t *)&std::nothrow);
}
