/*
 * XREFs of sub_1801309FF @ 0x1801309FF
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E47C @ 0x18007E47C (sub_18007E47C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801309FF(__int64 a1, __int64 a2)
{
  sub_18007E47C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
