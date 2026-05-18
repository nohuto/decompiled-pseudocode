/*
 * XREFs of sub_18013463D @ 0x18013463D
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123194 @ 0x180123194 (sub_180123194.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013463D(__int64 a1, __int64 a2)
{
  sub_180123194(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 168));
  throw;
}
