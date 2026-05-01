/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_2998a484fcd7d742033ed970065ccf76_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180080B00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2998a484fcd7d742033ed970065ccf76_::__lambda_2998a484fcd7d742033ed970065ccf76_ @ 0x18001E220 (_lambda_2998a484fcd7d742033ed970065ccf76_--__lambda_2998a484fcd7d742033ed970065ccf76_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2998a484fcd7d742033ed970065ccf76_>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  lambda_2998a484fcd7d742033ed970065ccf76_::__lambda_2998a484fcd7d742033ed970065ccf76_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
