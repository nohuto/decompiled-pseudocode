/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934___::_scalar_deleting_destructor_ @ 0x1800AB300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_6f5f86943447a9eee0358fb4a1366934_::__lambda_6f5f86943447a9eee0358fb4a1366934_ @ 0x1800A9B60 (_lambda_6f5f86943447a9eee0358fb4a1366934_--__lambda_6f5f86943447a9eee0358fb4a1366934_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_6f5f86943447a9eee0358fb4a1366934_::__lambda_6f5f86943447a9eee0358fb4a1366934_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
