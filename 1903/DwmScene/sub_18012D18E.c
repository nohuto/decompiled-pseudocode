/*
 * XREFs of sub_18012D18E @ 0x18012D18E
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069C7C @ 0x180069C7C (sub_180069C7C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D18E(__int64 a1, __int64 a2)
{
  sub_180069C7C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
