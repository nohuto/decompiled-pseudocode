/*
 * XREFs of ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x180046100
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180046010 (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x180124E8C (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_3bfb5a602b85e7686ece1d2b25427cc2___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_3bfb5a602b85e7686ece1d2b25427cc2___ @ 0x180046214 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--.c)
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x1800462F4 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006E460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskWindow::_RegisterForViewReadinessChanges(CTaskWindow *this)
{
  int v2; // esi
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF
  CTaskWindow *v8; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+28h] BYREF
  _QWORD *v11; // [rsp+78h] [rbp+30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+40h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 7) )
  {
    v12 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    v2 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>(this, &v11);
    if ( v2 >= 0 )
    {
      v8 = this;
      v9 = v11;
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 8LL))(v11, *v11);
      v3 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::___Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_3bfb5a602b85e7686ece1d2b25427cc2___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_3bfb5a602b85e7686ece1d2b25427cc2___(
                        &v12,
                        &v8);
      v4 = *v3;
      v13 = *v3;
      *v3 = 0LL;
      v5 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v5);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      v10 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 7))(
        *((_QWORD *)this + 7),
        &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
        &v10);
      (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v10 + 80LL))(v10, v4, v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  }
  return (unsigned int)v2;
}
