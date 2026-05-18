/*
 * XREFs of sub_180130C62 @ 0x180130C62
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     sub_1800695AC @ 0x1800695AC (sub_1800695AC.c)
 *     sub_180069C38 @ 0x180069C38 (sub_180069C38.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130C62(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_1800695AC(*(_QWORD *)(a2 + 64), *(_QWORD ***)(a2 + 88), *(_QWORD ***)(a2 + 56));
  v3 = sub_18000F544(*(_QWORD *)(a2 + 64));
  sub_180069C38(v3, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 72));
  throw;
}
