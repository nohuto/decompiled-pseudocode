/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@UEAA@XZ @ 0x1800211D4
 * Callers:
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$0 @ 0x180130BD0 (_SpectrumListener--SpectrumListener_--_1_--dtor$0.c)
 *     _MagnifierProcessor::MagnifierProcessor_::_1_::dtor$0 @ 0x180132489 (_MagnifierProcessor--MagnifierProcessor_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MagnifierProcessor::DeviceState_MagnifierProcessor::DeviceState__::_1_::dtor$3 @ 0x180134250 (_Microsoft--WRL--Details--MakeAndInitialize_MagnifierProcessor--DeviceState_Magnifi_ea_180134250.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
