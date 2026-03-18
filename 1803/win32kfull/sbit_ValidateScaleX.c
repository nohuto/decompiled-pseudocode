/*
 * XREFs of sbit_ValidateScaleX @ 0x1C02BAC1C
 * Callers:
 *     sbit_CalcDevHorMetrics @ 0x1C02B8BB8 (sbit_CalcDevHorMetrics.c)
 *     sbit_GetDevAdvanceWidth @ 0x1C02BA310 (sbit_GetDevAdvanceWidth.c)
 *     sbit_GetMetrics @ 0x1C02BA440 (sbit_GetMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sbit_ValidateScaleX(__int64 a1)
{
  if ( *(_WORD *)(a1 + 28) != 3 || *(_WORD *)(a1 + 34) )
    return 0LL;
  else
    return 7168LL;
}
