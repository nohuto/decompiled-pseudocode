/*
 * XREFs of ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x180074354
 * Callers:
 *     sub_18007B920 @ 0x18007B920 (sub_18007B920.c)
 *     sub_18011D3EC @ 0x18011D3EC (sub_18011D3EC.c)
 * Callees:
 *     ?__ExceptionPtrCopy@@YAXPEAXPEBX@Z @ 0x1801274DE (-__ExceptionPtrCopy@@YAXPEAXPEBX@Z.c)
 */

std::exception_ptr *__fastcall std::exception_ptr::exception_ptr(
        std::exception_ptr *this,
        const struct std::exception_ptr *a2)
{
  __ExceptionPtrCopy(this, a2);
  return this;
}
