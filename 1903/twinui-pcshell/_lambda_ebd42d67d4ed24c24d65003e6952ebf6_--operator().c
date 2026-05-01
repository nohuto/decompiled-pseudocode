/*
 * XREFs of _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator() @ 0x18021F630
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___::Run @ 0x180222E20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___--Run.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008D9EC (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801910C4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x18022223C (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x180222AE4 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator()(__int64 a1)
{
  __int64 v2; // rbp
  PeoplePaneViewManager *v3; // r14
  const unsigned __int16 **v4; // rsi
  char v5; // di
  PeoplePaneViewManager *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  LPVOID v10[4]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v11[24]; // [rsp+60h] [rbp-38h] BYREF
  int v12; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = a1 + 72;
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 72),
    (wil::ActivityThreadWatcher *)v10);
  v3 = *(PeoplePaneViewManager **)a1;
  v4 = (const unsigned __int16 **)(a1 + 8);
  v5 = 1;
  v7 = PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(
         v6,
         *(const unsigned __int16 **)(a1 + 8),
         *(const unsigned __int16 **)(a1 + 40));
  v8 = v7;
  if ( v7 >= 0 )
  {
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0);
    v8 = 0;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v5 )
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(v3, *v4);
  if ( v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v10);
  return v8;
}
