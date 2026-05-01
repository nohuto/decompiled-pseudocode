/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e___::_scalar_deleting_destructor_ @ 0x180247F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_c73351efc5a47bb1a53229d554a2998e_::__lambda_c73351efc5a47bb1a53229d554a2998e_ @ 0x180247354 (_lambda_c73351efc5a47bb1a53229d554a2998e_--__lambda_c73351efc5a47bb1a53229d554a2998e_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  lambda_c73351efc5a47bb1a53229d554a2998e_::__lambda_c73351efc5a47bb1a53229d554a2998e_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
