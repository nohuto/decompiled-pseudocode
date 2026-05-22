/*
 * XREFs of ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18001CCF4
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18001E9BC (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180015F08 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x18001B250 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18001BC18 (-Initialize@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x18001BDF8 (-Initialize@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@U.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18001BFD8 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18001C1B8 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x18001C398 (-Initialize@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIM.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x18001CF2C (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x18001D114 (--$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV-$ComPtr@UIMessageSession@@@WRL@Micros.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18001D25C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM@@@w.c)
 *     ??4?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z @ 0x18001E504 (--4-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::Initialize(
        Win32kInterop *this,
        struct IRawInputClient *a2,
        struct ISystemInputRouter *a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, struct ICursorBroker **); // rbx
  int v14; // eax
  int v15; // eax
  __int64 (__fastcall **v17)(); // [rsp+30h] [rbp-40h] BYREF
  Win32kInterop *v18; // [rsp+38h] [rbp-38h]
  __int64 (__fastcall ***v19)(); // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v21; // [rsp+90h] [rbp+20h] BYREF
  struct ICursorBroker *v22; // [rsp+A8h] [rbp+38h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)this + 7, (__int64)a2);
  Microsoft::WRL::ComPtr<ISystemInputRouter>::operator=((char *)this + 48, a3);
  *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v21);
  v5 = CoreUICreate(&v21);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v5,
      -2);
    __debugbreak();
  }
  wil::Feature<__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM>::ReportUsageToService(retaddr);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 5);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardOverriderDispatcher,KeyboardOverriderDispatcher,Microsoft::WRL::ComPtr<IMessageSession> &>(
         (char *)this + 40,
         &v21);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x91,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v6,
      -2);
    __debugbreak();
  }
  v17 = off_1801732E0;
  v18 = this;
  v19 = &v17;
  KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::Initialize(
    (_QWORD *)this + 106,
    &v21,
    v7,
    (__int64)&v17);
  v17 = off_1801732B0;
  v18 = this;
  v19 = &v17;
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((char *)this + 336, &v21, 5LL, &v17);
  v17 = off_180173280;
  v18 = this;
  v19 = &v17;
  KernelInputConnection<_MIT_DEVICE_IDENTIFICATION_MESSAGE>::Initialize((_QWORD *)this + 74, &v21, v8, (__int64)&v17);
  v17 = off_180173250;
  v18 = this;
  v19 = &v17;
  KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::Initialize((_QWORD *)this + 90, &v21, v9, (__int64)&v17);
  v17 = off_180173220;
  v18 = this;
  v19 = &v17;
  KernelInputConnection<_MIT_MOUSE_INPUT_MESSAGE>::Initialize((_QWORD *)this + 138, &v21, v10, (__int64)&v17);
  v17 = off_1801731F0;
  v18 = this;
  v19 = &v17;
  KernelInputConnection<_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE>::Initialize(
    (_QWORD *)this + 122,
    &v21,
    v11,
    (__int64)&v17);
  v17 = off_1801731C0;
  v18 = this;
  v19 = &v17;
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((char *)this + 464, &v21, 8LL, &v17);
  v12 = *((_QWORD *)this + 6);
  v13 = *(__int64 (__fastcall **)(__int64, struct ICursorBroker **))(*(_QWORD *)v12 + 72LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v22);
  v14 = v13(v12, &v22);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v14,
      -2);
    __debugbreak();
  }
  v15 = CursorNotificationProcessor::Initialize((Win32kInterop *)((char *)this + 288), v22);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v15,
      -2);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v21);
  return 0LL;
}
