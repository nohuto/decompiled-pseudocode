/*
 * XREFs of sub_18012930B @ 0x18012930B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D778 @ 0x18003D778 (sub_18003D778.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012930B(__int64 a1, __int64 a2)
{
  sub_18003D778(*(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 48));
  throw;
}
