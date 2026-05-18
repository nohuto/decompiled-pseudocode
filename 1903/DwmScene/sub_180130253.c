/*
 * XREFs of sub_180130253 @ 0x180130253
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BB94 @ 0x18002BB94 (sub_18002BB94.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130253(__int64 a1, __int64 a2)
{
  sub_18002BB94(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88), 1LL);
  throw;
}
