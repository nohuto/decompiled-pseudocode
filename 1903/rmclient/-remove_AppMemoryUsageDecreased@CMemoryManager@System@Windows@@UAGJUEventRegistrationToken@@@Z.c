/*
 * XREFs of ?remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UAGJUEventRegistrationToken@@@Z @ 0x100111E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010E2B (-Remove@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOption.c)
 */

int __stdcall Windows::System::CMemoryManager::remove_AppMemoryUsageDecreased(
        Windows::System::CMemoryManager *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (RTL_SRWLOCK *)Windows::System::CMemoryManager::s_levelDecreasedEvent,
           a2.value);
}
