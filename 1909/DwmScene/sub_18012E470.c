/*
 * XREFs of sub_18012E470 @ 0x18012E470
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E398 @ 0x18007E398 (sub_18007E398.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E470(__int64 a1, __int64 a2)
{
  sub_18007E398(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
