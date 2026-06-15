/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager___&_CProcess____::_1_::dtor$1 @ 0x180036A76
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCellularHostProcess@CProcess@@UEAAX_N@Z @ 0x1800042B0 (-SetCellularHostProcess@CProcess@@UEAAX_N@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____CProcess____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CProcess::SetCellularHostProcess(*(CProcess **)(a2 + 136));
}
