/*
 * XREFs of _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$3 @ 0x180038C0D
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCellularHostProcess@CProcess@@UEAAX_N@Z @ 0x18000B4D0 (-SetCellularHostProcess@CProcess@@UEAAX_N@Z.c)
 */

void __fastcall CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CProcess::SetCellularHostProcess(*(CProcess **)(a2 + 136));
}
