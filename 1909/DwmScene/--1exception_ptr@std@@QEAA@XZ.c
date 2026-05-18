/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x1800750D0
 * Callers:
 *     sub_18012E258 @ 0x18012E258 (sub_18012E258.c)
 *     sub_18012E432 @ 0x18012E432 (sub_18012E432.c)
 *     sub_1801342FF @ 0x1801342FF (sub_1801342FF.c)
 * Callees:
 *     ?__ExceptionPtrDestroy@@YAXPEAX@Z @ 0x1801275E8 (-__ExceptionPtrDestroy@@YAXPEAX@Z.c)
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
