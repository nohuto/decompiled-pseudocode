/*
 * XREFs of ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x18001B250
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18001CCF4 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18001B1F8 (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorNotificationProcessor::Initialize(CursorNotificationProcessor *this, struct ICursorBroker *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, const wchar_t *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 (__fastcall *)(CursorNotificationProcessor *, char *, unsigned int, const char *), CursorNotificationProcessor *, __int64, int *); // rdi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct ICursorBroker *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // [rsp+38h] [rbp-19h] BYREF
  __int64 v22; // [rsp+40h] [rbp-11h] BYREF
  __int64 v23; // [rsp+48h] [rbp-9h] BYREF
  int v24[2]; // [rsp+50h] [rbp-1h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v26[40]; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v25[1] = -2LL;
  v22 = 0LL;
  v23 = 0LL;
  *(_QWORD *)v24 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v21);
  v4 = CoreUICreate(&v21);
  v5 = v4;
  if ( v4 < 0 )
  {
    v19 = (unsigned int)v4;
    v20 = 17LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)v19);
    goto LABEL_15;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v23,
    v21);
  v6 = v21;
  v7 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)v21 + 64LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v22);
  v8 = v7(v6, L"Kernel\\MIT\\InputPort", &v22);
  v5 = v8;
  if ( v8 < 0 )
  {
    v19 = (unsigned int)v8;
    v20 = 21LL;
    goto LABEL_21;
  }
  v9 = v21;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(CursorNotificationProcessor *, char *, unsigned int, const char *), CursorNotificationProcessor *, __int64, int *))(*(_QWORD *)v21 + 88LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v23,
    v23);
  v11 = v10(v9, CursorNotificationProcessor::OnMitMessageReceived, this, v22, v24);
  v5 = v11;
  if ( v11 < 0 )
  {
    v19 = (unsigned int)v11;
    v20 = 28LL;
    goto LABEL_21;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v21 + 120LL))(v21, *(_QWORD *)v24, v26);
  v5 = v12;
  if ( v12 < 0 )
  {
    v19 = (unsigned int)v12;
    v20 = 32LL;
    goto LABEL_21;
  }
  v13 = NtMITCoreMsgKOpenConnectionTo(1LL, v26);
  v5 = v13 | 0x10000000;
  if ( v13 < 0 )
  {
    v19 = v5;
    v20 = 36LL;
    goto LABEL_21;
  }
  v14 = *(struct ICursorBroker **)this;
  if ( *(struct ICursorBroker **)this != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)a2 + 8LL))(a2);
      v14 = *(struct ICursorBroker **)this;
    }
    v25[0] = v14;
    *(_QWORD *)this = a2;
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v25);
  }
  Microsoft::WRL::ComPtr<IMessageSession>::operator=((__int64 *)this + 1, &v21);
  v15 = v22;
  v22 = 0LL;
  v16 = *((_QWORD *)this + 3);
  if ( v16 != v15 )
  {
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v16 = *((_QWORD *)this + 3);
    }
    v25[0] = v16;
    *((_QWORD *)this + 3) = v15;
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v25);
  }
  v17 = *(_QWORD *)v24;
  *(_QWORD *)v24 = 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v23,
    0LL);
  *((_QWORD *)this + 4) = v17;
  v5 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v21);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v23,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v22);
  return v5;
}
