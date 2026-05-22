/*
 * XREFs of ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x1800CBD9C
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x18004E6EC (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::bad_weak_ptr *__fastcall std::bad_weak_ptr::bad_weak_ptr(
        std::bad_weak_ptr *this,
        const struct std::bad_weak_ptr *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::bad_weak_ptr::`vftable';
  return this;
}
