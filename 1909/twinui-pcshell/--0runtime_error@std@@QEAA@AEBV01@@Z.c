/*
 * XREFs of ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x1801E3948
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x18011EFB8 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::runtime_error *__fastcall std::runtime_error::runtime_error(
        std::runtime_error *this,
        const struct std::runtime_error *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::runtime_error::`vftable';
  return this;
}
