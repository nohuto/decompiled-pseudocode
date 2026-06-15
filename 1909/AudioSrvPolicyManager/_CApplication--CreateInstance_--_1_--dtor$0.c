/*
 * XREFs of _CApplication::CreateInstance_::_1_::dtor$0 @ 0x18003620E
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CApplication::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32), (const struct std::nothrow_t *)0x2A0);
}
