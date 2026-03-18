/*
 * XREFs of ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x140003F04
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x140004104 (_o___std_exception_copy_0.c)
 */

std::bad_array_new_length *__fastcall std::bad_array_new_length::bad_array_new_length(
        std::bad_array_new_length *this,
        const struct std::bad_array_new_length *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  o___std_exception_copy_0((char *)a2 + 8);
  *(_QWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}
