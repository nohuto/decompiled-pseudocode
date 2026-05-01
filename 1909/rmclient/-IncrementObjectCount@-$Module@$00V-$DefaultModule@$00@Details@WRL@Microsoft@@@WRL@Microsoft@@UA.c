/*
 * XREFs of ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10
 * Callers:
 *     ??0?$RuntimeClass@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@23@UIInspectable@@@WRL@Microsoft@@QAE@XZ @ 0x100085BA (--0-$RuntimeClass@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@23@UIInspectable@@@WRL@Mi.c)
 *     ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AA_KAA_K@Details@WRL@Microsoft@@YG?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AA_K0@Z @ 0x10008830 (--$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AA_KAA_K@Details@WRL@Microsoft@@YG.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YGJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAPAU345@@Z @ 0x10008B20 (--$CreateAgileHelper@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microso.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@I@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@$$QAI@Z @ 0x10008C90 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@I@Details@WRL@Microsoft@@YGJ.c)
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YGJPAPAVCMemoryManager@System@Windows@@@Z @ 0x100090D0 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YGJPAPAVCMe.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100092E0 (-AddInternal@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windo.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YGJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAPAU345@@Z @ 0x10009530 (--$CreateAgileHelper@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@F.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@UAGJABU_GUID@@PAPAX@Z @ 0x10009740 (-QueryInterface@CMemoryManager@System@Windows@@UAGJABU_GUID@@PAPAX@Z.c)
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIActivationFactory@@@Z @ 0x100098E0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIA.c)
 *     ?AddRef@CMemoryManager@System@Windows@@UAGKXZ @ 0x10009C60 (-AddRef@CMemoryManager@System@Windows@@UAGKXZ.c)
 * Callees:
 *     <none>
 */

signed __int32 __stdcall Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(
        int a1)
{
  return _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
