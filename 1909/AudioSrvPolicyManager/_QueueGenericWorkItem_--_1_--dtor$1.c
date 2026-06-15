/*
 * XREFs of _QueueGenericWorkItem_::_1_::dtor$1 @ 0x1800373E7
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall QueueGenericWorkItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 152), (const struct std::nothrow_t *)&std::nothrow);
}
