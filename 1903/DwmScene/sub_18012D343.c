/*
 * XREFs of sub_18012D343 @ 0x18012D343
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031DAC @ 0x180031DAC (sub_180031DAC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D343(__int64 a1, __int64 a2)
{
  sub_180031DAC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88), 1LL);
  throw;
}
