/*
 * XREFs of ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180276930
 * Callers:
 *     <none>
 * Callees:
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008B0EC (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?BeginInvokeAnimation@MonitorFrame@@QEAAXXZ @ 0x18026D8F8 (-BeginInvokeAnimation@MonitorFrame@@QEAAXXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18026F810 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z @ 0x18027581C (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlAllUpViewHost::ViewLoaded(XamlAllUpViewHost *this)
{
  char *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // r15
  int v4; // r13d
  __int64 v5; // rdx
  MonitorFrame **v6; // r14
  MonitorFrame **v7; // r12
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v13; // rdx
  LPVOID v14[4]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v15[24]; // [rsp+78h] [rbp-9h] BYREF
  int v16; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v18; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v19; // [rsp+F0h] [rbp+6Fh] BYREF

  v2 = (char *)this - 128;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 104) & -(__int64)(this != (XamlAllUpViewHost *)128));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
  v5 = ++*((_QWORD *)this + 28);
  if ( v5 == (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3 )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (XamlAllUpViewHost *)((char *)this + 240),
      (wil::ActivityThreadWatcher *)v14);
    v6 = (MonitorFrame **)*((_QWORD *)this + 25);
    v7 = (MonitorFrame **)*((_QWORD *)this + 26);
    while ( 1 )
    {
      if ( v6 == v7 )
      {
        *((_DWORD *)this + 144) = 1;
        if ( v16 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
        wil::details::StoredCallContextInfo::~StoredCallContextInfo(v14);
        v5 = *((_QWORD *)this + 28);
        goto LABEL_11;
      }
      MonitorFrame::BeginInvokeAnimation(*v6);
      v19 = *((_QWORD *)*v6 + 5);
      v8 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v8 + 96LL))(v8, *((_QWORD *)this + 14), &v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      if ( v9 < 0 )
        break;
      if ( v18 )
      {
        v19 = *((_QWORD *)*v6 + 6);
        v10 = v19;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        if ( v9 < 0 )
        {
          v13 = 365LL;
          goto LABEL_19;
        }
      }
      ++v6;
    }
    v13 = 362LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v9);
    if ( v16 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v14);
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)v2);
  }
  else
  {
LABEL_11:
    v11 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
    if ( v5 == v11 )
      XamlSwitcherTelemetry::ShowXamlTaskView::Stop((XamlAllUpViewHost *)((char *)this + 240), v11, 1u);
    v9 = 0;
  }
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return (unsigned int)v9;
}
