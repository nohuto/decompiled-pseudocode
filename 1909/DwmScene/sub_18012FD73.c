/*
 * XREFs of sub_18012FD73 @ 0x18012FD73
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031EBC @ 0x180031EBC (sub_180031EBC.c)
 *     sub_18006DFB4 @ 0x18006DFB4 (sub_18006DFB4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FD73(__int64 a1, __int64 a2)
{
  sub_18006DFB4(*(_QWORD *)(a2 + 128), *(__int64 **)(a2 + 136), *(__int64 **)(a2 + 32));
  sub_180031EBC(*(_QWORD *)(a2 + 128), *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 152));
  throw;
}
