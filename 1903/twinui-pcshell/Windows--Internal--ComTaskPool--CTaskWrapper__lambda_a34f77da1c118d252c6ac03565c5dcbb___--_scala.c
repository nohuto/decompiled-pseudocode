/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___::_scalar_deleting_destructor_ @ 0x18009E070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_a34f77da1c118d252c6ac03565c5dcbb_::__lambda_a34f77da1c118d252c6ac03565c5dcbb_ @ 0x18009C9E8 (_lambda_a34f77da1c118d252c6ac03565c5dcbb_--__lambda_a34f77da1c118d252c6ac03565c5dcbb_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_a34f77da1c118d252c6ac03565c5dcbb_::__lambda_a34f77da1c118d252c6ac03565c5dcbb_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
