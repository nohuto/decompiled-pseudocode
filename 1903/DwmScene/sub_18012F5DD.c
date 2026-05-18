/*
 * XREFs of sub_18012F5DD @ 0x18012F5DD
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A5AE0 @ 0x1800A5AE0 (sub_1800A5AE0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F5DD(__int64 a1, __int64 a2)
{
  sub_1800A5AE0(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 88));
  throw;
}
