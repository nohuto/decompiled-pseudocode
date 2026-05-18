/*
 * XREFs of sub_18012D63E @ 0x18012D63E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E104 @ 0x18007E104 (sub_18007E104.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D63E(__int64 a1, __int64 a2)
{
  sub_18007E104(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
