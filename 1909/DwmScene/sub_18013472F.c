/*
 * XREFs of sub_18013472F @ 0x18013472F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     sub_180031EBC @ 0x180031EBC (sub_180031EBC.c)
 *     sub_18006DFB4 @ 0x18006DFB4 (sub_18006DFB4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013472F(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_18006DFB4(*(_QWORD *)(a2 + 32), *(__int64 **)(a2 + 80), *(__int64 **)(a2 + 72));
  v3 = sub_18000F594(*(_QWORD *)(a2 + 32));
  sub_180031EBC(v3, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 48));
  throw;
}
