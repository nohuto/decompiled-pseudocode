/*
 * XREFs of sub_18012787B @ 0x18012787B
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_18012787B(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 72) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 72) + 8LL))(
                           *(_QWORD *)(a2 + 72),
                           *(_QWORD *)(a2 + 80));
  return &loc_18000C46E;
}
