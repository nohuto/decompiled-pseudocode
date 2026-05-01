/*
 * XREFs of ??_Ebad_optional_access@std@@UEAAPEAXI@Z @ 0x180100700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _o___std_exception_destroy_0 @ 0x180087C2A (_o___std_exception_destroy_0.c)
 */

std::bad_optional_access *__fastcall std::bad_optional_access::`vector deleting destructor'(
        std::bad_optional_access *this,
        char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
