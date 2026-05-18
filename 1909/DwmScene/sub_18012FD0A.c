/*
 * XREFs of sub_18012FD0A @ 0x18012FD0A
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B2B48 @ 0x1800B2B48 (sub_1800B2B48.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FD0A(__int64 a1, __int64 a2)
{
  sub_1800B2B48(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
