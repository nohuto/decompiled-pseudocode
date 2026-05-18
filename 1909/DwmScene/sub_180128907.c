/*
 * XREFs of sub_180128907 @ 0x180128907
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800264AC @ 0x1800264AC (sub_1800264AC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180128907(__int64 a1, __int64 a2)
{
  sub_1800264AC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
