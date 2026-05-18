/*
 * XREFs of sub_18013461F @ 0x18013461F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     sub_180031DAC @ 0x180031DAC (sub_180031DAC.c)
 *     sub_18006DEA4 @ 0x18006DEA4 (sub_18006DEA4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013461F(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_18006DEA4(*(_QWORD *)(a2 + 32), *(__int64 **)(a2 + 80), *(__int64 **)(a2 + 72));
  v3 = sub_18000F544(*(_QWORD *)(a2 + 32));
  sub_180031DAC(v3, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 48));
  throw;
}
