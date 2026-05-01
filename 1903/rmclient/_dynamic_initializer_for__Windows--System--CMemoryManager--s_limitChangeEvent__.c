/*
 * XREFs of _dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x100054C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AgileEventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAE@XZ @ 0x10006EE0 (--0-$AgileEventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 *     _atexit @ 0x1000CB33 (_atexit.c)
 */

int dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__()
{
  Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AgileEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>();
  return atexit(dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_limitChangeEvent__);
}
