/*
 * XREFs of _lambda_074356edb2a7ba011f5805cd99c0b22b_::operator() @ 0x18001410C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_074356edb2a7ba011f5805cd99c0b22b___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::Invoke @ 0x1800150F0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800150F0.c)
 * Callees:
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800125EC (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800142A0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180014890 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ??$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAX$$QEAPEAUHWND__@@@Z @ 0x1800148B4 (--$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperie.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180014948 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801339D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_074356edb2a7ba011f5805cd99c0b22b_::operator()(
        Microsoft::WRL::WeakRef *this,
        __int64 a2,
        __int64 a3)
{
  struct IInspectable *v6; // r14
  __int64 v7; // r13
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v12; // rax
  __int64 v14; // rdx
  struct IInspectable *v15[3]; // [rsp+20h] [rbp-59h] BYREF
  char v16; // [rsp+38h] [rbp-41h]
  __int64 v17; // [rsp+40h] [rbp-39h]
  _BYTE v18[32]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v19[24]; // [rsp+70h] [rbp-9h] BYREF
  int v20; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  char v22; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v23; // [rsp+E8h] [rbp+6Fh] BYREF
  void *v24; // [rsp+F8h] [rbp+7Fh] BYREF

  v17 = -2LL;
  v6 = (struct IInspectable *)((char *)this + 24);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (char *)this + 24,
    v18);
  v7 = *((_QWORD *)this + 1);
  v15[1] = v6;
  v15[2] = (struct IInspectable *)v7;
  v16 = 1;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 48LL))(a2, &v23) >= 0 )
  {
    v24 = (void *)v23;
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::IncomingWindowReadinessEvent<HWND__ *>(v6, &v24);
  }
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v15);
  if ( !v15[0] )
    goto LABEL_9;
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 48LL))(a3, &v22);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8,
      (int)v15[0]);
  }
  else
  {
    if ( !v22 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x33E,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)0x80070015LL,
        (int)v15[0]);
      goto LABEL_9;
    }
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v10 = CMarshaledInterface::_Unmarshal(
            (Microsoft::WRL::WeakRef *)((char *)this + 16),
            &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
            &v24,
            0);
    v9 = v10;
    if ( v10 < 0 )
    {
      v14 = 825LL;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, a2, a3);
      v9 = v10;
      if ( v10 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
LABEL_9:
        v9 = 0;
        goto LABEL_10;
      }
      v14 = 826LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v10,
      (int)v15[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v7 + 16), 0LL);
  v12 = WindowsGetStringRawBuffer(*(HSTRING *)(v7 + 8), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v6,
    v12,
    StringRawBuffer);
  if ( v20 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((wil::details::StoredCallContextInfo *)v18);
  return v9;
}
