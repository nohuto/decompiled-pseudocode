/*
 * XREFs of sub_18012E360 @ 0x18012E360
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E288 @ 0x18007E288 (sub_18007E288.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E360(__int64 a1, __int64 a2)
{
  sub_18007E288(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
