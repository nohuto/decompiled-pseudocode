/*
 * XREFs of sub_18012F6ED @ 0x18012F6ED
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A5BF0 @ 0x1800A5BF0 (sub_1800A5BF0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F6ED(__int64 a1, __int64 a2)
{
  sub_1800A5BF0(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 88));
  throw;
}
