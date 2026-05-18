/*
 * XREFs of sub_18012CF71 @ 0x18012CF71
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069D08 @ 0x180069D08 (sub_180069D08.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CF71(__int64 a1, __int64 a2)
{
  sub_180069D08(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
