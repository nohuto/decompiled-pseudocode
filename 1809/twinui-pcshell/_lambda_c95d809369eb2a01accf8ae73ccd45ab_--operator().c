/*
 * XREFs of _lambda_c95d809369eb2a01accf8ae73ccd45ab_::operator() @ 0x180127270
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8___::Run @ 0x180127E90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8___--Run.c)
 * Callees:
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008B0EC (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800FAFA4 (WPP_SF_qd.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180127C8C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@wil@@CAX_N.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1801280FC (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x180128C54 (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_c95d809369eb2a01accf8ae73ccd45ab_::operator()(struct CFrameApplicationPresentation **a1)
{
  struct CFrameApplicationPresentation *v2; // rbx
  __int64 v3; // rax
  int v4; // [rsp+20h] [rbp-78h]
  LPVOID v5[4]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v6[24]; // [rsp+60h] [rbp-38h] BYREF
  int v7; // [rsp+78h] [rbp-20h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v5);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1[1] + 15) + 48LL))(*((_QWORD *)a1[1] + 15), 0LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::ReportUsageToService();
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***((_QWORD ***)a1[1] + 13) + 208LL))(
    **((_QWORD **)a1[1] + 13),
    *((_QWORD *)a1[1] + 16),
    0LL);
  CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
    (struct CFrameApplicationPresentation *)((char *)a1[1] + 64),
    a1[1],
    0LL,
    **((HWND **)a1[1] + 14));
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v2 = a1[1];
    v3 = (*(__int64 (__fastcall **)(struct CFrameApplicationPresentation *))(*(_QWORD *)*a1 + 32LL))(*a1);
    v4 = *((_DWORD *)v2 + 12);
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_853ba2fb797437ec94ff4aabc4e6fa11_Traceguids, v3, v4);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ShowWindowAsync(*((HWND *)a1[1] + 16), 0);
  CFrameApplicationPresentation::_DestroyFrameIfPossible(a1[1]);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v5);
}
