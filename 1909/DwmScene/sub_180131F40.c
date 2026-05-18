/*
 * XREFs of sub_180131F40 @ 0x180131F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038DEC @ 0x180038DEC (sub_180038DEC.c)
 *     sub_18007E0AC @ 0x18007E0AC (sub_18007E0AC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180131F40(__int64 a1, __int64 a2)
{
  sub_18007E0AC(*(_QWORD *)(a2 + 144), *(_QWORD **)(a2 + 32), *(_QWORD **)(a2 + 56));
  sub_180038DEC(*(_QWORD *)(a2 + 144), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 40));
  throw;
}
