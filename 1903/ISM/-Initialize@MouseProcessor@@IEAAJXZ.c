/*
 * XREFs of ?Initialize@MouseProcessor@@IEAAJXZ @ 0x180029E90
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180029E10 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18001616C (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MouseProcessor::Initialize(MouseProcessor *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, char *); // rsi
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 (__fastcall *)(), MouseProcessor *, char *); // rsi
  HKEY v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6));
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v17);
  v4 = v3(v2, &v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 119LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_5;
  }
  v6 = v17;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v17 + 24LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 13);
  v4 = v7(v6, *((_QWORD *)this + 7), 1LL, (char *)this + 104);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 120LL;
    goto LABEL_8;
  }
  if ( IsEdition(253345LL) )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v16);
    v10 = CoreUICreate(&v16);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v12 = v16;
      v13 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), MouseProcessor *, char *))(*(_QWORD *)v16
                                                                                                  + 128LL);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 214);
      v10 = v13(v12, lambda_bee3b73c73505971acff5e8346377b68_::_lambda_invoker_cdecl_, this, (char *)this + 1712);
      v5 = v10;
      if ( v10 >= 0 )
      {
        Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 14);
        RegistryWatcher::Create(
          v14,
          L"SYSTEM\\MOUSE",
          this,
          lambda_f2fdab03bc5b02d353eab8edcf2c7195_::_lambda_invoker_cdecl_,
          (struct RegistryWatcher **)this + 14);
        Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v16);
        goto LABEL_4;
      }
      v11 = 134LL;
    }
    else
    {
      v11 = 125LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v16);
    goto LABEL_5;
  }
LABEL_4:
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v17);
  return v5;
}
