/*
 * XREFs of sub_180128B68 @ 0x180128B68
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BBD8 @ 0x18002BBD8 (sub_18002BBD8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180128B68(__int64 a1, __int64 a2)
{
  sub_18002BBD8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
