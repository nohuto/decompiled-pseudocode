/*
 * XREFs of ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x1802E5998
 * Callers:
 *     ??0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x1802E196C (--0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableSh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e___ @ 0x1802DDB40 (Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multitas_ea_1802DDB40.c)
 *     ?add@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemInvokedEventHandler@3456@@Z @ 0x1802F4E80 (-add@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@.c)
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
  v4 = Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e___(
         v3,
         &v5);
  v7 = v4;
  *((_QWORD *)this + 10) = *(_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemInvoked::add(
                                        *((_QWORD *)this + 7),
                                        &v8,
                                        v4);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
}
