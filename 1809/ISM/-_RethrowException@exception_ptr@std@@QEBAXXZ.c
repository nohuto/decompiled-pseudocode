/*
 * XREFs of ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x18003C6CC
 * Callers:
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18003C6E0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn std::exception_ptr::_RethrowException(std::exception_ptr *this)
{
  __ExceptionPtrRethrow(this);
  JUMPOUT(0x18003C6D6LL);
}
