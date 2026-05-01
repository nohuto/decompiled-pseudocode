/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2de9129cf7ca5d1ddf0542513b424d5e___::_scalar_deleting_destructor_ @ 0x180276180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_2de9129cf7ca5d1ddf0542513b424d5e_::__lambda_2de9129cf7ca5d1ddf0542513b424d5e_ @ 0x1802752DC (_lambda_2de9129cf7ca5d1ddf0542513b424d5e_--__lambda_2de9129cf7ca5d1ddf0542513b424d5e_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2de9129cf7ca5d1ddf0542513b424d5e___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_2de9129cf7ca5d1ddf0542513b424d5e_::__lambda_2de9129cf7ca5d1ddf0542513b424d5e_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
