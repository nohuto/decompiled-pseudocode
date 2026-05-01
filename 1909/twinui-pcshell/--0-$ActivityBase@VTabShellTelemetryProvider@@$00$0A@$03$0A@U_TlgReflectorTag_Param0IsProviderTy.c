/*
 * XREFs of ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18024844C
 * Callers:
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18024C33C (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18024E064 (-EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18024E52C (-ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802520A0 (-OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@.c)
 *     ?OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180254DDC (-OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18025ED18 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     _lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator() @ 0x1802755A4 (_lambda_2de9129cf7ca5d1ddf0542513b424d5e_--operator().c)
 *     _lambda_63df1022615e5d58b392f54f931127cc_::operator() @ 0x1802759A0 (_lambda_63df1022615e5d58b392f54f931127cc_--operator().c)
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x180277320 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18027746C (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x18027F0D0 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180015800 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 33) = 0;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  return a1;
}
