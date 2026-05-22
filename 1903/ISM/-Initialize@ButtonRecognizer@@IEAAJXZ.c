/*
 * XREFs of ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800FD6BC
 * Callers:
 *     ?Create@ButtonRecognizer@@SAJPEAPEAV1@@Z @ 0x1800FD18C (-Create@ButtonRecognizer@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18001B50C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18001B67C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002736C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::Initialize(ButtonRecognizer *this)
{
  __int64 *v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rdx
  int Descriptor; // eax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, char *); // rbx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64 (__fastcall *)(void *, const void *, int), ButtonRecognizer *, _QWORD, char *); // rbx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64 (__fastcall *)(__int64), ButtonRecognizer *, char *); // rdi
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF

  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 5) = 0;
  *(_WORD *)((char *)this + 17) = 0;
  *((_BYTE *)this + 16) = 0;
  v2 = (__int64 *)((char *)this + 160);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 20);
  v3 = CoreUICreate(v2);
  if ( v3 < 0 )
  {
    v4 = 124LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 21,
    *v2);
  v19 = 0LL;
  v20 = 0;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v19, v6, (__int64)c_wszMessagePortNames);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v8 = 131LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)Descriptor);
    InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v19);
    return (unsigned int)v3;
  }
  v9 = *v2;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)*v2 + 56LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 23);
  Descriptor = v10(v9, v19, (char *)this + 184);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v8 = 135LL;
    goto LABEL_13;
  }
  v11 = *v2;
  v12 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), ButtonRecognizer *, _QWORD, char *))(*(_QWORD *)*v2 + 88LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 21,
    *((_QWORD *)this + 21));
  Descriptor = v12(v11, ButtonRecognizer::MessageProc, this, *((_QWORD *)this + 23), (char *)this + 176);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v8 = 141LL;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 24);
  Descriptor = CoreUICallCreateEndpointHost(*v2, (char *)this + 192, (char *)this + 200);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v8 = 146LL;
    goto LABEL_13;
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v19);
  v22 = 0LL;
  v13 = *v2;
  v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 24LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v22);
  v15 = v14(v13, &v22);
  v3 = v15;
  if ( v15 < 0 )
  {
    v16 = 155LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v22);
    return (unsigned int)v3;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v22 + 40LL))(
          v22,
          L"System\\Input\\ComboButton",
          *((_QWORD *)this + 22),
          1LL);
  v3 = v15;
  if ( v15 < 0 )
  {
    v16 = 160LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v22);
  v17 = *v2;
  v18 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64), ButtonRecognizer *, char *))(*(_QWORD *)v17 + 128LL);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 19);
  v3 = v18(v17, lambda_f1854fe2ac21130f928d03576a8a1bbe_::_lambda_invoker_cdecl_, this, (char *)this + 152);
  if ( v3 < 0 )
  {
    v4 = 172LL;
    goto LABEL_3;
  }
  return 0LL;
}
