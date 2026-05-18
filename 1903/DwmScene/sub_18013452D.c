/*
 * XREFs of sub_18013452D @ 0x18013452D
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123084 @ 0x180123084 (sub_180123084.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013452D(__int64 a1, __int64 a2)
{
  sub_180123084(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 168));
  throw;
}
