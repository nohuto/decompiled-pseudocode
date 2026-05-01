/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18028F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18025B7BC (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x18027455C (-Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_XamlAltTabViewController_void____cdecl_IXamlSwitcherWindowInteractionEvents::___void____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall ***v3)(_QWORD, __int64, __int64 *); // rbx
  __int64 v4; // rdi
  __int64 pExceptionObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v7)(_QWORD, __int64, __int64 *); // [rsp+58h] [rbp+10h]
  void *Exception; // [rsp+60h] [rbp+18h]

  v2 = Platform::Details::IWeakReference::Resolve(*(_QWORD *)(a1 + 8), (__int64)&_uuidof__AVXamlAltTabViewController__);
  pExceptionObject = v2;
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v2);
  v7 = v3;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( !v3 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  v4 = __abi_winrt_cast_to(0, v3, (__int64)&_uuidof__AVXamlAltTabViewController__);
  pExceptionObject = v4;
  (*(void (__fastcall **)(__int64))(a1 + 16))(v4 + *(int *)(a1 + 24));
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v3)[2])(v3);
}
