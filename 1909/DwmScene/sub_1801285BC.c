/*
 * XREFs of sub_1801285BC @ 0x1801285BC
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002582C @ 0x18002582C (sub_18002582C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801285BC(__int64 a1, __int64 a2)
{
  sub_18002582C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
