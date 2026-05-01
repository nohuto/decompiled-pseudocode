/*
 * XREFs of ?raise@SwitchItemCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@ME$AAAXPE$AAUISwitchItemDataSource@3456@PE$AAUISwitchItemCollectionChangedEventArgs@3456@@Z @ 0x18027C930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemCollectionChanged::raise(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  Platform::EventSource::InvokeVoid<Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>,Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>(
    (Platform::Details **)(a1 + 48),
    (RTL_SRWLOCK *)(a1 + 136),
    a2,
    a3);
}
