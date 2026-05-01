/*
 * XREFs of ??_E?$CResultTaskWrapper@V_lambda_53a04da55905c8211e57e0dfa928362b_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180072E40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper<_lambda_53a04da55905c8211e57e0dfa928362b_>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
