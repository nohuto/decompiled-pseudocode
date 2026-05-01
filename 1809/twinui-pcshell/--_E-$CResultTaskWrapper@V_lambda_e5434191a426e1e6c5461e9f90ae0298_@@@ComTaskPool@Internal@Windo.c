/*
 * XREFs of ??_E?$CResultTaskWrapper@V_lambda_e5434191a426e1e6c5461e9f90ae0298_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180257CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper<_lambda_e5434191a426e1e6c5461e9f90ae0298_>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
