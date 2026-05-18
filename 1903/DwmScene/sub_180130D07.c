/*
 * XREFs of sub_180130D07 @ 0x180130D07
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BB94 @ 0x18002BB94 (sub_18002BB94.c)
 *     sub_1800D9FF8 @ 0x1800D9FF8 (sub_1800D9FF8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130D07(__int64 a1, __int64 a2)
{
  sub_1800D9FF8(*(_QWORD *)(a2 + 128), *(__int64 **)(a2 + 152), *(__int64 **)(a2 + 40));
  sub_18002BB94(*(_QWORD *)(a2 + 128), *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 32));
  throw;
}
