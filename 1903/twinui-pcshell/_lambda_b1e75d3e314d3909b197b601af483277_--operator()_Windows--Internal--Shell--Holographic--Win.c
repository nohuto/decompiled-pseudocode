/*
 * XREFs of _lambda_b1e75d3e314d3909b197b601af483277_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18020900C
 * Callers:
 *     wistd::__function::__func__lambda_779d0cbcb7c833c1780224279e0894ce__long___cdecl(long)_::operator() @ 0x18020DAF0 (wistd--__function--__func__lambda_779d0cbcb7c833c1780224279e0894ce__long___cdecl(long)_--operato.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008D9EC (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180213A50 (-Stop@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U.c)
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180215CB4 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 *     ?_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32ApplicationView@@_N@Z @ 0x180215ECC (-_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32App.c)
 */

__int64 __fastcall lambda_b1e75d3e314d3909b197b601af483277_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_(
        struct wil::details::IFailureCallback *a1,
        struct IWin32ApplicationView **a2,
        int a3)
{
  int ready; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  LPVOID v10[4]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v11[24]; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1,
    (wil::ActivityThreadWatcher *)v10);
  if ( a3 >= 0 )
  {
    ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(
              (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)a2,
              1);
    v7 = ready;
    if ( ready < 0 )
    {
      v8 = 803LL;
      goto LABEL_6;
    }
    wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(a1);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31C,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)a3);
    ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_SendViewToDesktop(a2[53], 1);
    v7 = ready;
    if ( ready < 0 )
    {
      v8 = 799LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)ready);
      goto LABEL_9;
    }
  }
  v7 = 0;
LABEL_9:
  if ( v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v10);
  return v7;
}
