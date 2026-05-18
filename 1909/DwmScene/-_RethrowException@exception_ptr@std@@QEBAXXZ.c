/*
 * XREFs of ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x18007E5E4
 * Callers:
 *     sub_18007FA68 @ 0x18007FA68 (sub_18007FA68.c)
 * Callees:
 *     ?__ExceptionPtrRethrow@@YAXPEBX@Z @ 0x180127600 (-__ExceptionPtrRethrow@@YAXPEBX@Z.c)
 */

void __fastcall __noreturn std::exception_ptr::_RethrowException(std::exception_ptr *this)
{
  __ExceptionPtrRethrow(this);
  JUMPOUT(0x18007E5EDLL);
}
