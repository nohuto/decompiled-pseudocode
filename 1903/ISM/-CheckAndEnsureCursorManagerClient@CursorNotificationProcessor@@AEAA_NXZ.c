/*
 * XREFs of ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x18002A3C4
 * Callers:
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x18002A334 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002736C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059E14 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CursorNotificationProcessor::CheckAndEnsureCursorManagerClient(CursorNotificationProcessor *this)
{
  CursorNotificationProcessor *v1; // r14
  bool v2; // zf
  bool v3; // bl
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, const wchar_t *, __int64, _QWORD *); // rdi
  int v10; // eax
  __int64 v11; // rbx
  const char *v12; // r9
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v1 = this;
  v19 = 0LL;
  v14 = 0LL;
  v15[0] = 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v14,
    *((_QWORD *)this + 1));
  v2 = *((_QWORD *)v1 + 2) == 0LL;
  if ( !*((_QWORD *)v1 + 2) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 72LL))(*(_QWORD *)v1) )
    {
      try
      {
        v5 = *((_QWORD *)v1 + 1);
        v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL);
        Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v19);
        v7 = v6(v5, &v19);
        if ( v7 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0xCA,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cu"
                          "rsornotificationprocessor.cpp",
            (const char *)(unsigned int)v7,
            v13);
        v8 = v19;
        v9 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, _QWORD *))(*(_QWORD *)v19 + 24LL);
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          &v14,
          v14);
        v10 = v9(v8, L"System\\Input\\CursorManagerEndpoint", 1LL, v15);
        if ( v10 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0xCF,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cu"
                          "rsornotificationprocessor.cpp",
            (const char *)(unsigned int)v10,
            v13);
        v11 = v15[0];
        v15[0] = 0LL;
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          &v14,
          0LL);
        *((_QWORD *)v1 + 2) = v11;
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0xD3,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\curs"
                        "ornotificationprocessor.cpp",
          v12);
        v1 = this;
      }
    }
    v2 = *((_QWORD *)v1 + 2) == 0LL;
  }
  v3 = !v2;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v14,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v19);
  return v3;
}
