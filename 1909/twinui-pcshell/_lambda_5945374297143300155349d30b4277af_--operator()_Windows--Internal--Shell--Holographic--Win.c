/*
 * XREFs of _lambda_5945374297143300155349d30b4277af_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x1802281A0
 * Callers:
 *     wistd::__function::__func__lambda_8628948de6cbd45305f1da24d895736c__long___cdecl(long)_::operator() @ 0x18022CEE0 (wistd--__function--__func__lambda_8628948de6cbd45305f1da24d895736c__long___cdecl(long)_--operato.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180090190 (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180232DF0 (-Stop@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U.c)
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180235054 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall lambda_5945374297143300155349d30b4277af_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_(
        struct wil::details::IFailureCallback *a1,
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *a2,
        int a3)
{
  int ready; // eax
  unsigned int v7; // ebx
  LPVOID v9[4]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[24]; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1,
    (wil::ActivityThreadWatcher *)v9);
  if ( a3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33F,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)a3);
  ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(a2, 0);
  v7 = ready;
  if ( ready >= 0 )
  {
    wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(a1);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x341,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)ready);
  }
  if ( v11 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v9);
  return v7;
}
