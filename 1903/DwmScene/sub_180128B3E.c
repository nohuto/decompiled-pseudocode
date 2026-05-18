/*
 * XREFs of sub_180128B3E @ 0x180128B3E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BB94 @ 0x18002BB94 (sub_18002BB94.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180128B3E(__int64 a1, __int64 a2)
{
  sub_18002BB94(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
