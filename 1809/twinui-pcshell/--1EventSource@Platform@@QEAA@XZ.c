/*
 * XREFs of ??1EventSource@Platform@@QEAA@XZ @ 0x18026B124
 * Callers:
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__1__::_1_::dtor$3 @ 0x180268E1F (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_180268E1F.c)
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__1__::_1_::dtor$4 @ 0x180268E2F (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_180268E2F.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x18026977B (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_18026977B.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$2 @ 0x18026978B (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_18026978B.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$0 @ 0x18026B31E (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchItemDataViewIm.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x18026B32E (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchI_ea_18026B32E.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1__::_1_::dtor$3 @ 0x1802866FF (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_1802866FF.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1__::_1_::dtor$4 @ 0x18028670F (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_18028670F.c)
 * Callees:
 *     <none>
 */

void __fastcall Platform::EventSource::~EventSource(Platform::EventSource *this, void **a2)
{
  Platform::Details::EventSourceUninitialize(this, a2);
}
