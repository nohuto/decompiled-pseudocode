/*
 * XREFs of _lambda_6e3ab6272f90947ba1cd229626024096_::operator() @ 0x18024F564
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e3ab6272f90947ba1cd229626024096___::Run @ 0x180250D60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6e3ab6272f90947ba1cd229626024096___--Run.c)
 * Callees:
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008B0EC (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802121B8 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$SessionIdleTaskCompletionAdded@IAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEAK@Z @ 0x18023F190 (--$SessionIdleTaskCompletionAdded@IAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAX$$QEAI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_6e3ab6272f90947ba1cd229626024096_::operator()(unsigned int *a1)
{
  HRESULT v2; // eax
  int v3; // eax
  LPVOID v5[4]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v6[24]; // [rsp+68h] [rbp+17h] BYREF
  int v7; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  int v9; // [rsp+B8h] [rbp+67h] BYREF
  LPVOID ppv; // [rsp+C0h] [rbp+6Fh] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 8),
    (wil::ActivityThreadWatcher *)v5);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &ppv);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2567LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 24LL))(ppv, a1[6], 0x80000000LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2567LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=((__int64 *)(*(_QWORD *)a1 + 240LL), (__int64 *)&ppv);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 272LL))(*(_QWORD *)a1 + 16LL);
  ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int,HWND__ * const &,unsigned long &>(
    &v9,
    (__int64 *)a1 + 2,
    (__int64)(a1 + 6));
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 8), 0);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v5);
  return 0LL;
}
