/*
 * XREFs of _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$10 @ 0x1800372BD
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCellularHostProcess@CProcess@@UEAAX_N@Z @ 0x1800042B0 (-SetCellularHostProcess@CProcess@@UEAAX_N@Z.c)
 */

void __fastcall TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  CProcess::SetCellularHostProcess(*(CProcess **)(a2 + 80));
}
