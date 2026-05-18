/*
 * XREFs of sub_18012CE8B @ 0x18012CE8B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069BF8 @ 0x180069BF8 (sub_180069BF8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CE8B(__int64 a1, __int64 a2)
{
  sub_180069BF8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
