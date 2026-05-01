/*
 * XREFs of ?InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ @ 0x1801F2A70
 * Callers:
 *     ?s_OnExecutionTimerExpired@RealtimeEnticementManager@Cortana@TwinUI@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1801F3230 (-s_OnExecutionTimerExpired@RealtimeEnticementManager@Cortana@TwinUI@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800497EC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180062270 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0CI@@StringReference@Internal@Windows@@QEAA@AEAY0CI@$$CBG@Z @ 0x1801D8F08 (--$-0$0CI@@StringReference@Internal@Windows@@QEAA@AEAY0CI@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801F2358 (--$ActivateInstance@V-$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@M.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1801F2518 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Wi.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1801F2644 (--$WaitForCompletion@PEAU-$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationMo.c)
 *     wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator() @ 0x1801F2930 (wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--operator().c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall TwinUI::Cortana::RealtimeEnticementManager::InvokeAppToAppServiceEnticement(
        TwinUI::Cortana::RealtimeEnticementManager *this)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64); // rdi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64); // rdi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64); // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, void (__fastcall ****)(__int64, GUID *, __int64 *)); // rdi
  int v13; // eax
  DWORD v14; // edx
  int v15; // r8d
  void (__fastcall ***v16)(__int64, GUID *, __int64 *); // rdi
  __int64 v17; // rdx
  __int64 *v18; // rax
  int v19; // eax
  const WCHAR *v20; // rax
  HSTRING_HEADER *v21; // rbx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int64, _QWORD); // rdi
  int v26; // eax
  DWORD v27; // edx
  int v28; // r8d
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  void (__fastcall ***v31)(__int64, GUID *, __int64 *); // rdi
  int v32; // eax
  __int64 v34; // [rsp+28h] [rbp-79h] BYREF
  unsigned int v35; // [rsp+30h] [rbp-71h] BYREF
  int v36; // [rsp+34h] [rbp-6Dh] BYREF
  void (__fastcall ***v37)(__int64, GUID *, __int64 *); // [rsp+38h] [rbp-69h] BYREF
  __int64 v38; // [rsp+40h] [rbp-61h] BYREF
  void (__fastcall ***v39)(__int64, GUID *, __int64 *); // [rsp+48h] [rbp-59h] BYREF
  int v40; // [rsp+50h] [rbp-51h] BYREF
  __int64 v41; // [rsp+58h] [rbp-49h] BYREF
  const WCHAR *v42; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v43[2]; // [rsp+68h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-29h] BYREF
  __int64 v45; // [rsp+90h] [rbp-11h]
  HSTRING_HEADER v46; // [rsp+98h] [rbp-9h] BYREF
  HSTRING v47; // [rsp+B0h] [rbp+Fh]
  HSTRING_HEADER v48; // [rsp+B8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v43[1] = -2LL;
  v34 = 0LL;
  v45 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.AppService.AppServiceConnection",
    0x39u,
    0x38u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::AppService::IAppServiceConnection>>(
         v45,
         &v34);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = v34;
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 56LL);
    v45 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Cortana-AppToApp-CortanaEnticement",
      0x23u,
      0x22u);
    v2 = v6(v5, v45);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 60LL;
      goto LABEL_11;
    }
    v35 = 0;
    if ( SHRegGetDWORD(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
           L"PrereleaseExperience",
           &v35) >= 0
      && v35 )
    {
      v7 = v34;
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 72LL);
      v45 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Microsoft.Cortana_8wekyb3d8bbwe",
        0x20u,
        0x1Fu);
      v2 = v8(v7, v45);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 65LL;
        goto LABEL_11;
      }
    }
    else
    {
      v9 = v34;
      v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 72LL);
      v45 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Microsoft.Windows.Cortana_cw5n1h2txyewy",
        0x28u,
        0x27u);
      v2 = v10(v9, v45);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 69LL;
        goto LABEL_11;
      }
    }
    v39 = 0LL;
    v11 = v34;
    v12 = *(__int64 (__fastcall **)(__int64, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v34 + 80LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
    v13 = v12(v11, &v39);
    v3 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_44:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
      goto LABEL_45;
    }
    hstringHeader.Reserved.Reserved1 = &v34;
    *(_WORD *)&hstringHeader.Reserved.Reserved2[8] = 258;
    v16 = v39;
    v3 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus> *>(
           v39,
           v14,
           v15);
    if ( v3 >= 0 )
      v3 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), int *))(*v16)[8])(v16, &v40);
    if ( v3 < 0 )
    {
      v17 = 84LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v3);
LABEL_43:
      wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()((__int64)&hstringHeader);
      goto LABEL_44;
    }
    if ( v40 )
    {
      v3 = -2147023660;
      v17 = 85LL;
      goto LABEL_20;
    }
    v38 = 0LL;
    v18 = (__int64 *)Windows::Internal::StringReference::StringReference(
                       (HSTRING *)&v46,
                       L"Windows.Foundation.Collections.ValueSet");
    v19 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            *v18,
            &v38);
    v3 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v19);
LABEL_42:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
      goto LABEL_43;
    }
    v41 = v38;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v41);
    v20 = (const WCHAR *)((char *)this + 24);
    if ( *((_QWORD *)this + 6) >= 8uLL )
      v20 = *(const WCHAR **)v20;
    v42 = v20;
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v48, &v42);
    v47 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v46, L"Enticement", 0xBu, 0xAu);
    v23 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v41,
            v47,
            v22,
            (__int64)v21[1].Reserved.Reserved1);
    v3 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v23);
LABEL_41:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
      goto LABEL_42;
    }
    v37 = 0LL;
    v24 = v34;
    v25 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v34 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    v26 = v25(v24, v38, &v37);
    v3 = v26;
    if ( v26 < 0 )
    {
      v29 = (unsigned int)v26;
      v30 = 93LL;
LABEL_38:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)v29);
LABEL_40:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
      goto LABEL_41;
    }
    v31 = v37;
    v3 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *> *>(
           v37,
           v27,
           v28);
    if ( v3 >= 0 )
      v3 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), _QWORD *))(*v31)[8])(v31, v43);
    if ( v3 >= 0 )
    {
      v36 = 3;
      v32 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v43[0] + 56LL))(v43[0], &v36);
      v3 = v32;
      if ( v32 < 0 )
      {
        v29 = (unsigned int)v32;
        v30 = 99LL;
        goto LABEL_38;
      }
      if ( !v36 )
      {
        v3 = 0;
        goto LABEL_40;
      }
      v3 = -2147467259;
      v30 = 100LL;
    }
    else
    {
      v30 = 96LL;
    }
    v29 = (unsigned int)v3;
    goto LABEL_38;
  }
  v4 = 59LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_45:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  return (unsigned int)v3;
}
