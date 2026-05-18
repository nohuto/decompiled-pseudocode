/*
 * XREFs of sub_18012F649 @ 0x18012F649
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A5AE0 @ 0x1800A5AE0 (sub_1800A5AE0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F649(__int64 a1, __int64 a2)
{
  sub_1800A5AE0(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
