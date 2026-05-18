/*
 * XREFs of sub_18012F99A @ 0x18012F99A
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A9F20 @ 0x1800A9F20 (sub_1800A9F20.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F99A(__int64 a1, __int64 a2)
{
  sub_1800A9F20(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
