/*
 * XREFs of ??0invalid_operation@Concurrency@@QEAA@AEBV01@@Z @ 0x1802935B8
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x1800DE05C (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

Concurrency::invalid_operation *__fastcall Concurrency::invalid_operation::invalid_operation(
        Concurrency::invalid_operation *this,
        const struct Concurrency::invalid_operation *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &Concurrency::invalid_operation::`vftable';
  return this;
}
