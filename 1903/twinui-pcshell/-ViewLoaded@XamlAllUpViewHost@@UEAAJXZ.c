/*
 * XREFs of ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x1802D02E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180054508 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008D9EC (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?BeginInvokeAnimation@MonitorFrame@@QEAAXXZ @ 0x1802C6B4C (-BeginInvokeAnimation@MonitorFrame@@QEAAXXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1802C8AE0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x1802CED60 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlAllUpViewHost::ViewLoaded(XamlAllUpViewHost *this)
{
  char *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // r15
  int v4; // r13d
  enum _TABLETMODESTATE *v5; // rdx
  __int64 v6; // rcx
  MonitorFrame **v7; // r14
  MonitorFrame **v8; // r12
  __int64 v9; // rdi
  int v10; // edi
  __int64 v11; // rdi
  __int64 v12; // rbx
  char IsTabletMode; // al
  __int64 v15; // rdx
  LPVOID v16[4]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v17[24]; // [rsp+78h] [rbp-9h] BYREF
  int v18; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v20; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v21; // [rsp+F0h] [rbp+6Fh] BYREF

  v2 = (char *)this - 128;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 104) & -(__int64)(this != (XamlAllUpViewHost *)128));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
  v5 = (enum _TABLETMODESTATE *)++*((_QWORD *)this + 28);
  v6 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
  if ( v5 == (enum _TABLETMODESTATE *)v6 )
  {
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (XamlAllUpViewHost *)((char *)this + 240),
      (wil::ActivityThreadWatcher *)v16);
    v7 = (MonitorFrame **)*((_QWORD *)this + 25);
    v8 = (MonitorFrame **)*((_QWORD *)this + 26);
    while ( 1 )
    {
      if ( v7 == v8 )
      {
        *((_DWORD *)this + 144) = 1;
        if ( v18 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
        wil::details::StoredCallContextInfo::~StoredCallContextInfo(v16);
        v5 = (enum _TABLETMODESTATE *)*((_QWORD *)this + 28);
        goto LABEL_11;
      }
      MonitorFrame::BeginInvokeAnimation(*v7);
      v21 = *((_QWORD *)*v7 + 5);
      v9 = v21;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v9 + 96LL))(v9, *((_QWORD *)this + 14), &v20);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      if ( v10 < 0 )
        break;
      if ( v20 )
      {
        v21 = *((_QWORD *)*v7 + 6);
        v11 = v21;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        if ( v10 < 0 )
        {
          v15 = 366LL;
          goto LABEL_19;
        }
      }
      ++v7;
    }
    v15 = 363LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v10);
    if ( v18 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v16);
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)v2);
  }
  else
  {
LABEL_11:
    v12 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
    if ( v5 == (enum _TABLETMODESTATE *)v12 )
    {
      IsTabletMode = TabletModeHelpers::IsTabletMode((TabletModeHelpers *)v6, v5);
      XamlSwitcherTelemetry::ShowXamlTaskView::Stop((XamlAllUpViewHost *)((char *)this + 240), v12, IsTabletMode, 1u);
    }
    v10 = 0;
  }
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return (unsigned int)v10;
}
