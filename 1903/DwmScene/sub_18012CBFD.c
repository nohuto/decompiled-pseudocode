/*
 * XREFs of sub_18012CBFD @ 0x18012CBFD
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800695AC @ 0x1800695AC (sub_1800695AC.c)
 *     sub_180069C38 @ 0x180069C38 (sub_180069C38.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CBFD(__int64 a1, __int64 a2)
{
  sub_1800695AC(*(_QWORD *)(a2 + 128), *(_QWORD ***)(a2 + 136), *(_QWORD ***)(a2 + 40));
  sub_180069C38(*(_QWORD *)(a2 + 128), *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 152));
  throw;
}
