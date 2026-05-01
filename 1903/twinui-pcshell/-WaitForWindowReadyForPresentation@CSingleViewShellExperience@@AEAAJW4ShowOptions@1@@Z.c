/*
 * XREFs of ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180044214
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800439EC (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180014BCC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180030A98 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180043BB8 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_074356edb2a7ba011f5805cd99c0b22b___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_074356edb2a7ba011f5805cd99c0b22b___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___ @ 0x1800454AC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800454AC.c)
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800458C4 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 *     ??$?0PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1$$QEAI$$QEA_N3AEA_N@Z @ 0x180045AA8 (--$-0PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@AEAA@U-.c)
 *     ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180045BE8 (--1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     _lambda_074356edb2a7ba011f5805cd99c0b22b_::__lambda_074356edb2a7ba011f5805cd99c0b22b_ @ 0x180045C14 (_lambda_074356edb2a7ba011f5805cd99c0b22b_--__lambda_074356edb2a7ba011f5805cd99c0b22b_.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800461BC (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180046394 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180046394.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSingleViewShellExperience::WaitForWindowReadyForPresentation(__int64 a1, char a2)
{
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // r12
  int v5; // edx
  char v6; // r14
  int v7; // eax
  int v8; // edi
  int v9; // eax
  const WCHAR *v10; // rdi
  WCHAR *v11; // rax
  WCHAR *v12; // rbx
  const WCHAR *v13; // rbx
  __int64 v14; // rbx
  void *v15; // rax
  int v16; // eax
  int v18; // eax
  const unsigned __int16 *v19; // rbx
  const unsigned __int16 *v20; // rax
  int v21; // [rsp+28h] [rbp-E0h]
  bool v22; // [rsp+48h] [rbp-C0h] BYREF
  bool v23; // [rsp+49h] [rbp-BFh] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  PCWSTR v27; // [rsp+68h] [rbp-A0h] BYREF
  PCWSTR StringRawBuffer; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  __int128 v30; // [rsp+80h] [rbp-88h] BYREF
  __int64 v31; // [rsp+90h] [rbp-78h]
  __int128 v32; // [rsp+98h] [rbp-70h]
  char v33; // [rsp+A8h] [rbp-60h]
  _QWORD v34[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-40h] BYREF
  void **v36; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v37[320]; // [rsp+208h] [rbp+100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  v31 = -2LL;
  LODWORD(v25) = -1;
  v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 400LL))(*(_QWORD *)(a1 + 24), &v25);
  v22 = *(_QWORD *)(a1 + 120) != 0LL;
  v23 = *(_DWORD *)(a1 + 72) != 0;
  LODWORD(v24) = v25;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v27 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::WaitForWindowReadyForPresentation(
    (unsigned int)v37,
    v5,
    (unsigned int)&v27,
    (unsigned int)&StringRawBuffer,
    (__int64)&v24,
    (__int64)&v23,
    (__int64)&v22,
    a1 + 53);
  *(_QWORD *)&v30 = v37;
  *((_QWORD *)&v30 + 1) = a1;
  v32 = v30;
  v6 = 1;
  v33 = 1;
  v29 = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
         v4,
         &v29);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x308,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7,
      v21);
    goto LABEL_18;
  }
  v9 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(a1 + 72, *v4, 4LL);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x30B,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v9,
      v21);
  if ( (a2 & 1) != 0
    || (v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80)), v8 >= 0)
    || (a2 & 4) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 120) )
    {
      *(_QWORD *)&v30 = a1;
      *((_QWORD *)&v30 + 1) = CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged;
      v10 = 0LL;
      v11 = (WCHAR *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v11;
      if ( v11 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v11);
        *((_OWORD *)v12 + 1) = v30;
        *(_QWORD *)v12 = off_180424720;
        v10 = v12;
      }
      StringRawBuffer = v10;
      v13 = *(const WCHAR **)(a1 + 96);
      v27 = v13;
      if ( v13 )
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v13 + 8LL))(v13);
      v26 = 0LL;
      LODWORD(v24) = 2;
      *(_QWORD *)&v30 = v10;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
        &v26,
        (__int64)&GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
        &v30,
        (unsigned int *)&v24);
      v34[0] = v13;
      if ( v13 )
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v13 + 8LL))(v13);
      v34[1] = a1;
      v35 = v26;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v35);
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        &v36,
        v37);
      v36 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
      v14 = 0LL;
      v15 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v15 )
        v14 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::___Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_074356edb2a7ba011f5805cd99c0b22b___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_074356edb2a7ba011f5805cd99c0b22b___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___(
                v15,
                v34);
      v24 = v14;
      lambda_074356edb2a7ba011f5805cd99c0b22b_::__lambda_074356edb2a7ba011f5805cd99c0b22b_(v34);
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v29 + 80LL))(v29, v14, a1 + 120);
      v8 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x343,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v16,
          v21);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&StringRawBuffer);
        goto LABEL_18;
      }
      v6 = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&StringRawBuffer);
    }
    v8 = 0;
    goto LABEL_18;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x311,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v18,
      v21);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  if ( v6 )
  {
    v19 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
    v20 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
      (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v37,
      v20,
      v19);
  }
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::~WaitForWindowReadyForPresentation((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v37);
  return (unsigned int)v8;
}
