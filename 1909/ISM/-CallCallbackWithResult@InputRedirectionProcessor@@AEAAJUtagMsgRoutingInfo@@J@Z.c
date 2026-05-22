/*
 * XREFs of ?CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x180106AF0
 * Callers:
 *     ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x180106C50 (-DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x180106D70 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputRedirectionProcessor::CallCallbackWithResult(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  __int64 (__fastcall *v10)(_QWORD *, GUID *, __int64 *); // rdi
  _QWORD *v11; // rcx
  _QWORD *v13; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v15[1] = -2LL;
  v13 = 0LL;
  v14 = 0;
  v15[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**(_QWORD **)(a1 + 48) + 24LL))(
         *(_QWORD *)(a1 + 48),
         &GUID_a464cb85_68af_4085_87c5_bbf363d89286,
         &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 314LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD **))(**(_QWORD **)(a1 + 48) + 48LL))(
         *(_QWORD *)(a1 + 48),
         a2,
         v14,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 319LL;
    goto LABEL_9;
  }
  v9 = v13;
  v10 = *(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v13;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v15);
  v6 = v10(v9, &GUID_a464cb85_68af_4085_87c5_bbf363d89286, v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 323LL;
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15[0] + 24LL))(v15[0], a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 325LL;
    goto LABEL_9;
  }
  v7 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v15);
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 16LL))(v11, *v11);
  }
  return v7;
}
