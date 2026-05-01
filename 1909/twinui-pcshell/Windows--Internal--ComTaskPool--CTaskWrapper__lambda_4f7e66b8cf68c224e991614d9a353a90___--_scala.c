/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90___::_scalar_deleting_destructor_ @ 0x1804058C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_4f7e66b8cf68c224e991614d9a353a90_::__lambda_4f7e66b8cf68c224e991614d9a353a90_ @ 0x18038EDD4 (_lambda_4f7e66b8cf68c224e991614d9a353a90_--__lambda_4f7e66b8cf68c224e991614d9a353a90_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_4f7e66b8cf68c224e991614d9a353a90_::__lambda_4f7e66b8cf68c224e991614d9a353a90_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
