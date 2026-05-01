/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x18000AB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(
           &Windows::System::CMemoryManager::s_levelIncreasedEvent,
           a2);
}
