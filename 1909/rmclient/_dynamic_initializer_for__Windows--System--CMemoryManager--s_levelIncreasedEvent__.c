/*
 * XREFs of _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x100054A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AgileEventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAE@XZ @ 0x10006EB0 (--0-$AgileEventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOption.c)
 *     _atexit @ 0x1000CB33 (_atexit.c)
 */

int dynamic_initializer_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__()
{
  Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(&Windows::System::CMemoryManager::s_levelIncreasedEvent);
  return atexit(dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__);
}
