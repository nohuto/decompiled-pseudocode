/*
 * XREFs of sub_18012D3E7 @ 0x18012D3E7
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038DDC @ 0x180038DDC (sub_180038DDC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D3E7(__int64 a1, __int64 a2)
{
  sub_180038DDC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
