/*
 * XREFs of ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180080500
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x180080A7C (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800821C8 (--$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@W.c)
 *     ??$GetActivationFactory@UIInspectable@@@wil@@YA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180082298 (--$GetActivationFactory@UIInspectable@@@wil@@YA-AV-$com_ptr_t@UIInspectable@@Uerr_exception_poli.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800828AC (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180082AD4 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15 #try_helpers=1
bool __fastcall CreativeFramework::Actions::IsMsaConnected(CreativeFramework::Actions *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdi
  int DefaultSignInAccount; // eax
  wil::details::in1diag3 *v17; // rcx
  const WCHAR *v18; // rdi
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rax
  bool v27; // si
  __int64 v29; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-A8h] BYREF
  const WCHAR *v32; // [rsp+48h] [rbp-A0h] BYREF
  const WCHAR *v33; // [rsp+50h] [rbp-98h] BYREF
  __int64 v34; // [rsp+58h] [rbp-90h] BYREF
  __int64 v35; // [rsp+60h] [rbp-88h] BYREF
  __int64 v36; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v37[4]; // [rsp+70h] [rbp-78h] BYREF
  GUID v38; // [rsp+90h] [rbp-58h] BYREF
  GUID v39; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v37[1] = -2LL;
  LODWORD(v29) = 0;
  v32 = L"https://login.microsoft.com";
  v33 = L"consumers";
  wil::GetActivationFactory<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>(v37);
  v1 = v37[0];
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v39, &v33);
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v38, &v32);
  v30 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v1 + 96LL))(
         v1,
         *(_QWORD *)(v3 + 24),
         *(_QWORD *)(v2 + 24),
         &v30);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v4);
LABEL_51:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x643,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v6);
    goto LABEL_52;
  }
  v5 = v30;
  v36 = 0LL;
  LODWORD(v29) = 2;
  v6 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider *> *>(v30);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v36);
  v7 = retaddr;
  if ( v6 < 0 )
    goto LABEL_51;
  v8 = v36;
  v36 = 0LL;
  v37[2] = v8;
  if ( v8 )
  {
    wil::GetActivationFactory<IInspectable>(&v33);
    v9 = (**(__int64 (__fastcall ***)(const WCHAR *, GUID *, __int64 *))v33)(
           v33,
           &GUID_07650a66_66ea_489d_aa90_0dabc75f3567,
           &v31);
    v10 = retaddr;
    if ( v9 >= 0 )
    {
      v38 = GUID_00000000_0000_0000_0000_000000000000;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v31 + 264LL))(v31, v8, &v38);
      v12 = retaddr;
      if ( v11 >= 0 )
      {
        v35 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 232LL))(v31, &v35);
        v14 = retaddr;
        if ( v13 >= 0 )
        {
          v15 = v35;
          v32 = 0LL;
          LODWORD(v29) = 12;
          DefaultSignInAccount = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> *>(v35);
          if ( DefaultSignInAccount >= 0 )
            DefaultSignInAccount = (*(__int64 (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)v15 + 64LL))(
                                     v15,
                                     &v32);
          v17 = retaddr;
          if ( DefaultSignInAccount >= 0 )
          {
            v18 = v32;
            v32 = 0LL;
            v37[3] = v18;
            v34 = 0LL;
            v19 = (*(__int64 (__fastcall **)(const WCHAR *, __int64 *))(*(_QWORD *)v18 + 48LL))(v18, &v34);
            v20 = retaddr;
            if ( v19 >= 0 )
            {
              v21 = v34;
              if ( !v34 )
              {
LABEL_35:
                if ( v21 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v18 + 16LL))(v18);
                if ( v35 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                if ( v31 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                if ( v33 )
                  (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v33 + 16LL))(v33);
                goto LABEL_43;
              }
              v29 = 0LL;
              v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, &v29);
              v23 = retaddr;
              if ( v22 >= 0 )
              {
                if ( v29 )
                {
                  v39 = GUID_00000000_0000_0000_0000_000000000000;
                  v24 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v31 + 264LL))(v31, v29, &v39);
                  v25 = retaddr;
                  if ( v24 >= 0 )
                  {
                    v26 = *(_QWORD *)&v38.Data1 - *(_QWORD *)&v39.Data1;
                    if ( *(_QWORD *)&v38.Data1 == *(_QWORD *)&v39.Data1 )
                      v26 = *(_QWORD *)v38.Data4 - *(_QWORD *)v39.Data4;
                    v27 = v26 == 0;
                    if ( v29 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                    if ( v34 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v18 + 16LL))(v18);
                    if ( v35 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                    if ( v31 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                    if ( v33 )
                      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v33 + 16LL))(v33);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
                    if ( v30 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
                    if ( v37[0] )
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v37[0] + 16LL))(v37[0]);
                    return v27;
                  }
LABEL_58:
                  wil::details::in1diag3::Throw_Hr(
                    v25,
                    (void *)0x56,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
                    (const char *)(unsigned int)v24);
                  JUMPOUT(0x180080A74LL);
                }
                v21 = v34;
                goto LABEL_35;
              }
LABEL_57:
              wil::details::in1diag3::Throw_Hr(
                v23,
                (void *)0x51,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
                (const char *)(unsigned int)v22);
              goto LABEL_58;
            }
LABEL_56:
            wil::details::in1diag3::Throw_Hr(
              v20,
              (void *)0x4D,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
              (const char *)(unsigned int)v19);
            goto LABEL_57;
          }
LABEL_55:
          wil::details::in1diag3::Throw_Hr(
            v17,
            (void *)0x643,
            (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
            (const char *)(unsigned int)DefaultSignInAccount);
          goto LABEL_56;
        }
LABEL_54:
        wil::details::in1diag3::Throw_Hr(
          v14,
          (void *)0x4A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_55;
      }
LABEL_53:
      wil::details::in1diag3::Throw_Hr(
        v12,
        (void *)0x46,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_54;
    }
LABEL_52:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
    goto LABEL_53;
  }
LABEL_43:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v37[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v37[0] + 16LL))(v37[0]);
  return 0;
}
