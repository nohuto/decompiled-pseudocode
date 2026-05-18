/*
 * XREFs of sub_18012FA86 @ 0x18012FA86
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A5CCC @ 0x1800A5CCC (sub_1800A5CCC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FA86(__int64 a1, __int64 a2)
{
  sub_1800A5CCC(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
