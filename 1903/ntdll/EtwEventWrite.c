/*
 * XREFs of EtwEventWrite @ 0x180052CB0
 * Callers:
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     EtwEventWriteEndScenario @ 0x1800519D0 (EtwEventWriteEndScenario.c)
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 *     sub_18007CDAC @ 0x18007CDAC (sub_18007CDAC.c)
 *     EtwEventWriteStartScenario @ 0x18008B6A0 (EtwEventWriteStartScenario.c)
 *     sub_1800CC190 @ 0x1800CC190 (sub_1800CC190.c)
 *     sub_1800CC218 @ 0x1800CC218 (sub_1800CC218.c)
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 *     sub_180101A58 @ 0x180101A58 (sub_180101A58.c)
 *     sub_180101AD0 @ 0x180101AD0 (sub_180101AD0.c)
 *     sub_18010FDD8 @ 0x18010FDD8 (sub_18010FDD8.c)
 * Callees:
 *     sub_180052D34 @ 0x180052D34 (sub_180052D34.c)
 */

__int64 __fastcall EtwEventWrite(int a1, int a2, int a3, __int64 a4)
{
  return sub_180052D34(a1, a2, 0, 0, 0, 0LL, 0LL, a3, a4);
}
