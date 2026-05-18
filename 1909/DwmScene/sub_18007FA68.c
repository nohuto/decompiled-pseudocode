/*
 * XREFs of sub_18007FA68 @ 0x18007FA68
 * Callers:
 *     sub_18007BA30 @ 0x18007BA30 (sub_18007BA30.c)
 *     sub_18011D4FC @ 0x18011D4FC (sub_18011D4FC.c)
 * Callees:
 *     ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x18007E5E4 (-_RethrowException@exception_ptr@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall __noreturn sub_18007FA68(std::exception_ptr *a1)
{
  std::exception_ptr::_RethrowException(a1);
}
