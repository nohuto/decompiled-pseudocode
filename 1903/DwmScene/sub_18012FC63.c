/*
 * XREFs of sub_18012FC63 @ 0x18012FC63
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031DAC @ 0x180031DAC (sub_180031DAC.c)
 *     sub_18006DEA4 @ 0x18006DEA4 (sub_18006DEA4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FC63(__int64 a1, __int64 a2)
{
  sub_18006DEA4(*(_QWORD *)(a2 + 128), *(__int64 **)(a2 + 136), *(__int64 **)(a2 + 32));
  sub_180031DAC(*(_QWORD *)(a2 + 128), *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 152));
  throw;
}
