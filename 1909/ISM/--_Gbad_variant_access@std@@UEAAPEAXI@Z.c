/*
 * XREFs of ??_Gbad_variant_access@std@@UEAAPEAXI@Z @ 0x18004F000
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_destroy_0 @ 0x18002C086 (_o___std_exception_destroy_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::bad_variant_access *__fastcall std::bad_variant_access::`scalar deleting destructor'(
        std::bad_variant_access *this,
        char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
