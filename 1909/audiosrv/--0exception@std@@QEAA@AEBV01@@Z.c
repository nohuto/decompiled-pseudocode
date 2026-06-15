/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1800BB54C
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x180065C1E (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  o___std_exception_copy_0();
  return this;
}
