/*
 * XREFs of ??1?$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QAE@XZ @ 0x1001041A
 * Callers:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100092E0 (-AddInternal@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windo.c)
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 */

void __thiscall Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::EventTargetArray>::~MakeAllocator<Microsoft::WRL::Details::EventTargetArray>(
        void **this)
{
  if ( *this )
    operator delete(*this);
}
