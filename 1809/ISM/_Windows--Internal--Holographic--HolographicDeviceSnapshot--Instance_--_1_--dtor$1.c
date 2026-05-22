/*
 * XREFs of _Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance_::_1_::dtor$1 @ 0x1801330F9
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  operator delete(*(void **)(a2 + 120), (const struct std::nothrow_t *)0x80);
}
