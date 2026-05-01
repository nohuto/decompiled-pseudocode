/*
 * XREFs of _lambda_946b47fcad2e62ff0f8d349904161392_::operator() @ 0x1802407E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392___::Run @ 0x180243630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392___--Run.c)
 * Callees:
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008B0EC (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$SessionIdleTaskCompletionRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x18023F2E4 (--$SessionIdleTaskCompletionRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_946b47fcad2e62ff0f8d349904161392_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  LPVOID v4[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v5[24]; // [rsp+50h] [rbp-38h] BYREF
  int v6; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 16),
    (wil::ActivityThreadWatcher *)v4);
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        754LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 136LL));
  ViewManagerInteropTraceLogging::SessionIdleTaskCompletionRemoved<unsigned int &>((int *)(*(_QWORD *)a1 + 148LL));
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 16, 0);
  if ( v6 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v5);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v4);
}
