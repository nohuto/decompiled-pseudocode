/*
 * XREFs of sub_18013459B @ 0x18013459B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123480 @ 0x180123480 (sub_180123480.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013459B(__int64 a1, __int64 a2)
{
  sub_180123480(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88), 1LL);
  throw;
}
