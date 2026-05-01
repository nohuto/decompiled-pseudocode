/*
 * XREFs of _lambda_3debc4ca9d8e656fb3713c45e37949b6_::operator() @ 0x1801C7BDC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6___::Run @ 0x1801CB630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6___--Run.c)
 * Callees:
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008B0EC (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801647D4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x1801CAA7C (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3debc4ca9d8e656fb3713c45e37949b6_::operator()(const unsigned __int16 **a1)
{
  __int64 v2; // rdi
  PeoplePaneViewManager *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  LPVOID v7[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[24]; // [rsp+50h] [rbp-38h] BYREF
  int v9; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = (__int64)(a1 + 9);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 9),
    (wil::ActivityThreadWatcher *)v7);
  v4 = PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(v3, a1[1], a1[5]);
  v5 = v4;
  if ( v4 >= 0 )
  {
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v9 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v8);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v7);
  return v5;
}
