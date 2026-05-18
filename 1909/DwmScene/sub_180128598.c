/*
 * XREFs of sub_180128598 @ 0x180128598
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025FA8 @ 0x180025FA8 (sub_180025FA8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180128598(__int64 a1, __int64 a2)
{
  sub_180025FA8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
