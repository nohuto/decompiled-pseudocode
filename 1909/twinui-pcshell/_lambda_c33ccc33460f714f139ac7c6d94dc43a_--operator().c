/*
 * XREFs of _lambda_c33ccc33460f714f139ac7c6d94dc43a_::operator() @ 0x18016FA64
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9___::Run @ 0x180170620 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9___--Run.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180057C60 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180090190 (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1801403C4 (WPP_SF_qd.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18017038C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@wil@@CAX_N.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x18017098C (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x1801715A4 (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_c33ccc33460f714f139ac7c6d94dc43a_::operator()(struct CFrameApplicationPresentation **a1)
{
  struct CFrameApplicationPresentation *v2; // rbx
  __int64 v3; // rax
  int v4; // [rsp+20h] [rbp-78h]
  LPVOID v5[4]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v6[24]; // [rsp+60h] [rbp-38h] BYREF
  int v7; // [rsp+78h] [rbp-20h]

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
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
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_94922da7bd9137d502a338501bb650ae_Traceguids, v3, v4);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ShowWindowAsync(*((HWND *)a1[1] + 16), 0);
  CFrameApplicationPresentation::_DestroyFrameIfPossible(a1[1]);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v5);
}
