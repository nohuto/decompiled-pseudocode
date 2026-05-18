/*
 * XREFs of sub_180128C24 @ 0x180128C24
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BCE8 @ 0x18002BCE8 (sub_18002BCE8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180128C24(__int64 a1, __int64 a2)
{
  sub_18002BCE8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
