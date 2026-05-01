/*
 * XREFs of ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x180414690
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180090190 (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ @ 0x180413A70 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ.c)
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H@Z @ 0x180413AA8 (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H@Z.c)
 *     ?Stop@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4PTPGestureEndState@3@@Z @ 0x180415D38 (-Stop@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4PTPGesture.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGestureHandler::FinishSwipe(
        VirtualDesktopGestureHandler *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v6; // rdx
  VirtualDesktopGestureContext *v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  LPVOID v11[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v12[24]; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (VirtualDesktopGestureHandler *)((char *)this + 72),
    (wil::ActivityThreadWatcher *)v11);
  if ( !*((_QWORD *)this + 4) )
  {
    v6 = 762LL;
LABEL_5:
    v8 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_9;
  }
  v7 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 8);
  if ( !v7 )
  {
    v6 = 763LL;
    goto LABEL_5;
  }
  v9 = VirtualDesktopGestureContext::Commit(v7, (VirtualDesktopGestureHandler *)((char *)this + 8), a4);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2FD,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
    VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)((char *)this + 8));
  }
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::Stop((char *)this + 72, 0LL);
  v8 = 0;
LABEL_9:
  if ( v13 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v12);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v11);
  return v8;
}
