/*
 * XREFs of _Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(Platform::Object___Windows::UI::Core::WindowActivatedEventArgs__)__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x180307B10
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802D2F28 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x1802ECDCC (-Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler_XamlAltTabViewController_void____cdecl_IXamlSwitcherWindowInteractionEvents::___Platform::Object___Windows::UI::Core::WindowActivatedEventArgs_____::_2_::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, __int64, __int64 *); // rbx
  void *Exception; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 pExceptionObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, __int64, __int64 *); // [rsp+68h] [rbp+20h]

  v6 = Platform::Details::IWeakReference::Resolve(*(_QWORD *)(a1 + 8), (__int64)&_uuidof__AVXamlAltTabViewController__);
  pExceptionObject = v6;
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v6);
  v13 = v7;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( !v7 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v9 = Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v9);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  v10 = __abi_winrt_cast_to(0, v7, (__int64)&_uuidof__AVXamlAltTabViewController__);
  pExceptionObject = v10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 16))(v10 + *(int *)(a1 + 24), a2, a3);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v7)[2])(v7);
}
