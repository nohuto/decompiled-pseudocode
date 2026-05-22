/*
 * XREFs of _PenDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x1800A5160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PenDeviceCollection::OnDeviceAttach_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64), (const struct std::nothrow_t *)0x90);
}
