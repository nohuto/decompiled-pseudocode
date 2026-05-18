/*
 * XREFs of sub_18012D274 @ 0x18012D274
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800264F0 @ 0x1800264F0 (sub_1800264F0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D274(__int64 a1, __int64 a2)
{
  sub_1800264F0(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
