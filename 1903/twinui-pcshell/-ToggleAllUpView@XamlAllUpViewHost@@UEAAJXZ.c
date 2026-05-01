/*
 * XREFs of ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1802CFB80
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180054508 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008D9EC (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x1802C8CD0 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1802CE0A0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x1802CED60 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::ToggleAllUpView(XamlAllUpViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  int v3; // r14d
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  enum _TABLETMODESTATE *v9; // rdx
  TabletModeHelpers *v10; // rcx
  char IsTabletMode; // al
  LPVOID v13[4]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-38h] BYREF
  int v15; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v4 = *((_DWORD *)this + 176);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      v5 = XamlAllUpViewHost::Show((__int64)this, *((_QWORD *)this + 29), *((void **)this + 30), *((_DWORD *)this + 72));
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 301LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v5);
        goto LABEL_12;
      }
      goto LABEL_11;
    }
  }
  else
  {
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (XamlAllUpViewHost *)((char *)this + 368),
      (wil::ActivityThreadWatcher *)v13);
    v8 = (__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 3;
    IsTabletMode = TabletModeHelpers::IsTabletMode(v10, v9);
    XamlSwitcherTelemetry::ShowXamlTaskView::Stop((XamlAllUpViewHost *)((char *)this + 368), v8, IsTabletMode, 0);
    if ( v15 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v13);
  }
  v5 = XamlAllUpViewHost::DismissViewAnimated(this);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 297LL;
    goto LABEL_10;
  }
LABEL_11:
  v6 = 0;
LABEL_12:
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v6;
}
