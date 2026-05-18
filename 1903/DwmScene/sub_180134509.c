/*
 * XREFs of sub_180134509 @ 0x180134509
 * Callers:
 *     <none>
 * Callees:
 *     sub_18012316C @ 0x18012316C (sub_18012316C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134509(__int64 a1, __int64 a2)
{
  sub_18012316C(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 104));
  throw;
}
