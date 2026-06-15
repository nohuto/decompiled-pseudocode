/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____ptr64_&___ptr64_CProcess_____ptr64__::_1_::dtor$1 @ 0x180039138
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCellularHostProcess@CProcess@@UEAAX_N@Z @ 0x18000B4D0 (-SetCellularHostProcess@CProcess@@UEAAX_N@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____ptr64_____ptr64_CProcess_____ptr64__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CProcess::SetCellularHostProcess(*(CProcess **)(a2 + 136));
}
