/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___::_scalar_deleting_destructor_ @ 0x18030C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::__lambda_152963d5211cf6149a80abe334e76dfa_ @ 0x18030BD30 (_lambda_152963d5211cf6149a80abe334e76dfa_--__lambda_152963d5211cf6149a80abe334e76dfa_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_152963d5211cf6149a80abe334e76dfa_::__lambda_152963d5211cf6149a80abe334e76dfa_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
