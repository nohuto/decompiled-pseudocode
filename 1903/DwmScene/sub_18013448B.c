/*
 * XREFs of sub_18013448B @ 0x18013448B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123370 @ 0x180123370 (sub_180123370.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013448B(__int64 a1, __int64 a2)
{
  sub_180123370(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88), 1LL);
  throw;
}
