/*
 * XREFs of sub_18012F6C9 @ 0x18012F6C9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025FA8 @ 0x180025FA8 (sub_180025FA8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F6C9(__int64 a1, __int64 a2)
{
  sub_180025FA8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
