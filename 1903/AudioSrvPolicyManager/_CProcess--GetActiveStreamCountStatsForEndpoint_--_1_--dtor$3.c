/*
 * XREFs of _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$3 @ 0x180036988
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCellularHostProcess@CProcess@@UEAAX_N@Z @ 0x1800042B0 (-SetCellularHostProcess@CProcess@@UEAAX_N@Z.c)
 */

void __fastcall CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CProcess::SetCellularHostProcess(*(CProcess **)(a2 + 64));
}
