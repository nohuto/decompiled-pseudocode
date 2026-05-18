/*
 * XREFs of sub_18012F735 @ 0x18012F735
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A5BCC @ 0x1800A5BCC (sub_1800A5BCC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F735(__int64 a1, __int64 a2)
{
  sub_1800A5BCC(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
