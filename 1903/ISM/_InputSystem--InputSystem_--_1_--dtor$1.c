/*
 * XREFs of _InputSystem::InputSystem_::_1_::dtor$1 @ 0x18003D3AC
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall InputSystem::InputSystem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 96), (const struct std::nothrow_t *)0x40);
}
