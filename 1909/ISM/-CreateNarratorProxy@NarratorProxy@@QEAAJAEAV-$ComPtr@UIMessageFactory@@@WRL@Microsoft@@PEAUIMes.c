/*
 * XREFs of ?CreateNarratorProxy@NarratorProxy@@QEAAJAEAV?$ComPtr@UIMessageFactory@@@WRL@Microsoft@@PEAUIMessageProxyListener@@@Z @ 0x1800C0270
 * Callers:
 *     ?SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800C11D0 (-SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NarratorProxy::CreateNarratorProxy(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  __int64 *v12; // r14
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, unsigned __int64, _QWORD, __int64 *); // r14
  const wchar_t *v15; // rax
  int v16; // ecx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, const wchar_t *, _QWORD, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v21)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v24; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v25; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned int v27; // [rsp+90h] [rbp+40h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+58h] BYREF

  v28 = 0LL;
  v27 = 0;
  v6 = a1 + 3;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a1 + 3);
  v7 = CoreUIClientCreate(v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 21LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardoverr"
               "iderdispatcher.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_25;
  }
  v10 = *v6;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 56LL);
  v12 = a1 + 2;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a1 + 2);
  v7 = v11(v10, a1 + 2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 22LL;
    goto LABEL_23;
  }
  v13 = *v12;
  v14 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)*v12 + 24LL);
  v15 = L"Input\\Service.AlpcPort\\Server";
  if ( L"Input\\Service.AlpcPort\\Server" )
  {
    v25 = L"Input\\Service.AlpcPort\\Server";
    v16 = 0;
    while ( *v15 )
    {
      ++v15;
      ++v16;
    }
    v24 = v16 | 0x80000000;
  }
  else
  {
    v25 = 0LL;
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1 + 1);
  v7 = v14(v13, (unsigned __int64)&v24 & -(__int64)(v25 != 0LL), 0LL, a1 + 1);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 23LL;
    goto LABEL_23;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*a2 + 24LL))(
         *a2,
         &GUID_036f83f6_2c8b_4f50_ad5a_833402b2feb4,
         &v27);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 25LL;
    goto LABEL_23;
  }
  v17 = *a2;
  v18 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)*a2 + 40LL);
  v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v19)[2])(v19);
  }
  v7 = v18(v17, L"System\\RemoteTextInputOverrider", v27, (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v28);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 26LL;
    goto LABEL_23;
  }
  v20 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v28;
  v21 = **v28;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a1);
  v7 = v21(v20, &GUID_036f83f6_2c8b_4f50_ad5a_833402b2feb4, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 29LL;
    goto LABEL_23;
  }
  v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v28)[7])(v28, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 32LL;
    goto LABEL_23;
  }
  v8 = 0;
LABEL_25:
  v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v22)[2])(v22);
  }
  return v8;
}
