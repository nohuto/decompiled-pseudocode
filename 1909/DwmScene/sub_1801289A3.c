/*
 * XREFs of sub_1801289A3 @ 0x1801289A3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B89C @ 0x18002B89C (sub_18002B89C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801289A3(__int64 a1, __int64 a2)
{
  sub_18002B89C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
