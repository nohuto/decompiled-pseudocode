/*
 * XREFs of sub_180033B10 @ 0x180033B10
 * Callers:
 *     sub_180033108 @ 0x180033108 (sub_180033108.c)
 * Callees:
 *     sub_180033F8C @ 0x180033F8C (sub_180033F8C.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033B10(__int64 a1, char a2)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 880LL))(*(_QWORD *)(a1 + 144));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 888LL))(*(_QWORD *)(a1 + 144));
  if ( a2 )
    return sub_180033F8C(a1);
  return result;
}
