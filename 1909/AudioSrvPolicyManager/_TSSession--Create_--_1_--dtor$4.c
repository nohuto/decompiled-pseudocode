/*
 * XREFs of _TSSession::Create_::_1_::dtor$4 @ 0x1800370B7
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCellularHostProcess@CProcess@@UEAAX_N@Z @ 0x1800042B0 (-SetCellularHostProcess@CProcess@@UEAAX_N@Z.c)
 */

void __fastcall TSSession::Create_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  CProcess::SetCellularHostProcess(*(CProcess **)(a2 + 72));
}
