/*
 * XREFs of ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18038E510
 * Callers:
 *     <none>
 * Callees:
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008B0EC (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ @ 0x18038E5C0 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ.c)
 *     ?Stop@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4PTPGestureEndState@3@@Z @ 0x180390860 (-Stop@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4PTPGesture.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureHandler::CancelSwipe(VirtualDesktopGestureHandler *this)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  LPVOID v5[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v6[24]; // [rsp+50h] [rbp-38h] BYREF
  int v7; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (VirtualDesktopGestureHandler *)((char *)this + 72),
    (wil::ActivityThreadWatcher *)v5);
  if ( !*((_QWORD *)this + 4) )
  {
    v2 = 776LL;
LABEL_5:
    v3 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_7;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v2 = 777LL;
    goto LABEL_5;
  }
  VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)((char *)this + 8));
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::Stop((char *)this + 72, 1LL);
  v3 = 0;
LABEL_7:
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v5);
  return v3;
}
