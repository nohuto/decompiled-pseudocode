/*
 * XREFs of sub_18007F958 @ 0x18007F958
 * Callers:
 *     sub_18007B920 @ 0x18007B920 (sub_18007B920.c)
 *     sub_18011D3EC @ 0x18011D3EC (sub_18011D3EC.c)
 * Callees:
 *     ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x18007E4D4 (-_RethrowException@exception_ptr@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall __noreturn sub_18007F958(std::exception_ptr *a1)
{
  std::exception_ptr::_RethrowException(a1);
}
