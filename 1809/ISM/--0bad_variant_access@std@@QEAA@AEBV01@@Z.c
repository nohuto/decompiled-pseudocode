/*
 * XREFs of ??0bad_variant_access@std@@QEAA@AEBV01@@Z @ 0x18004917C
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18012BDFA (_o___std_exception_copy_0.c)
 */

std::bad_variant_access *__fastcall std::bad_variant_access::bad_variant_access(
        std::bad_variant_access *this,
        const struct std::bad_variant_access *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  o___std_exception_copy_0((char *)a2 + 8);
  *(_QWORD *)this = &std::bad_variant_access::`vftable';
  return this;
}
