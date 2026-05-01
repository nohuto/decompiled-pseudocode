/*
 * XREFs of ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x18026D278
 * Callers:
 *     ??0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180269354 (--0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableSh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_fcea73766659ae40d84bf4f8c073c10d___ @ 0x180265710 (Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multitas_ea_180265710.c)
 *     ?add@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemInvokedEventHandler@3456@@Z @ 0x18027BF40 (-add@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MonitorFrame::AddCallback(MonitorFrame *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v7; // [rsp+60h] [rbp+18h]
  char v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = *((_QWORD *)this + 5);
  v2 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  v3 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v7 = v3;
  v5 = v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  v4 = Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_fcea73766659ae40d84bf4f8c073c10d___(
         v3,
         &v5);
  v7 = v4;
  *((_QWORD *)this + 10) = *(_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemInvoked::add(
                                        *((_QWORD *)this + 7),
                                        &v8,
                                        v4);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
}
