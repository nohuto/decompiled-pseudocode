/*
 * XREFs of sub_180033A00 @ 0x180033A00
 * Callers:
 *     sub_180032FF8 @ 0x180032FF8 (sub_180032FF8.c)
 * Callees:
 *     sub_180033E7C @ 0x180033E7C (sub_180033E7C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033A00(__int64 a1, char a2)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 880LL))(*(_QWORD *)(a1 + 144));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 888LL))(*(_QWORD *)(a1 + 144));
  if ( a2 )
    return sub_180033E7C(a1);
  return result;
}
