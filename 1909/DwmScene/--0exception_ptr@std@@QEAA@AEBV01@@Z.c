/*
 * XREFs of ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x180074464
 * Callers:
 *     sub_18007BA30 @ 0x18007BA30 (sub_18007BA30.c)
 *     sub_18011D4FC @ 0x18011D4FC (sub_18011D4FC.c)
 * Callees:
 *     ?__ExceptionPtrCopy@@YAXPEAXPEBX@Z @ 0x1801275EE (-__ExceptionPtrCopy@@YAXPEAXPEBX@Z.c)
 */

std::exception_ptr *__fastcall std::exception_ptr::exception_ptr(
        std::exception_ptr *this,
        const struct std::exception_ptr *a2)
{
  __ExceptionPtrCopy(this, a2);
  return this;
}
