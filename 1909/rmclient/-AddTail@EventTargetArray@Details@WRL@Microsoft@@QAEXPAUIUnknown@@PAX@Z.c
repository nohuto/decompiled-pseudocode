/*
 * XREFs of ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QAEXPAUIUnknown@@PAX@Z @ 0x1000BA0D
 * Callers:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100089C0 (-AddInternal@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeO.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010E2B (-Remove@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOption.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010F84 (-Remove@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEAAV012@PAUIUnknown@@@Z @ 0x1000B830 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEAAV012@PAUIUnknown@@@Z.c)
 */

void __thiscall Microsoft::WRL::Details::EventTargetArray::AddTail(
        volatile signed __int32 ***this,
        struct IUnknown *a2,
        volatile signed __int32 *a3)
{
  Microsoft::WRL::ComPtr<IUnknown>::operator=(this[4], (volatile signed __int32 *)a2);
  this[5][this[4] - this[3]] = a3;
  ++this[4];
}
