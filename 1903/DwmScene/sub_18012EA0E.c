/*
 * XREFs of sub_18012EA0E @ 0x18012EA0E
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800645C8 @ 0x1800645C8 (sub_1800645C8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012EA0E(__int64 a1, __int64 a2)
{
  sub_1800645C8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
