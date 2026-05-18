/*
 * XREFs of sub_18012CBD9 @ 0x18012CBD9
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800696D8 @ 0x1800696D8 (sub_1800696D8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CBD9(__int64 a1, __int64 a2)
{
  sub_1800696D8(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
