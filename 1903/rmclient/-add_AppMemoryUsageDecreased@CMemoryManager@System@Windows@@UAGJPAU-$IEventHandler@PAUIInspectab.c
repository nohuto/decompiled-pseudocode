/*
 * XREFs of ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UAGJPAU?$IEventHandler@PAUIInspectable@@@Foundation@3@PAUEventRegistrationToken@@@Z @ 0x1000C210
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAUEventRegistrationToken@@@Z @ 0x10008950 (-Add@-$AgileEventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpti.c)
 *     ?Init@CMemoryManager@System@Windows@@CGJXZ @ 0x10009DC0 (-Init@CMemoryManager@System@Windows@@CGJXZ.c)
 */

int __stdcall Windows::System::CMemoryManager::add_AppMemoryUsageDecreased(int a1, int a2, int a3)
{
  int result; // eax

  result = Windows::System::CMemoryManager::Init();
  if ( result >= 0 )
    return Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
             a2,
             a3);
  return result;
}
