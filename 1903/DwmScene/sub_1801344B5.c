/*
 * XREFs of sub_1801344B5 @ 0x1801344B5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18012316C @ 0x18012316C (sub_18012316C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801344B5(__int64 a1, __int64 a2)
{
  sub_18012316C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
