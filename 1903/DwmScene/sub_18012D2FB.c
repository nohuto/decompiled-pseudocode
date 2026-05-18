/*
 * XREFs of sub_18012D2FB @ 0x18012D2FB
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E47C @ 0x18007E47C (sub_18007E47C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D2FB(__int64 a1, __int64 a2)
{
  sub_18007E47C(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 112));
  throw;
}
