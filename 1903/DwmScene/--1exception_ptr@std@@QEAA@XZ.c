/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x180074FC0
 * Callers:
 *     sub_18012E148 @ 0x18012E148 (sub_18012E148.c)
 *     sub_18012E322 @ 0x18012E322 (sub_18012E322.c)
 *     sub_1801341EF @ 0x1801341EF (sub_1801341EF.c)
 * Callees:
 *     ?__ExceptionPtrDestroy@@YAXPEAX@Z @ 0x1801274D8 (-__ExceptionPtrDestroy@@YAXPEAX@Z.c)
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
