/*
 * XREFs of ??0CRPCTimeout@@QEAA@K@Z @ 0x180141028
 * Callers:
 *     ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x180147A50 (-QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEA.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18015AEC8 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _lambda_21f9f957c927a999d0e9096f458a2397_::operator() @ 0x18022ADB0 (_lambda_21f9f957c927a999d0e9096f458a2397_--operator().c)
 *     _lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_::operator() @ 0x18022B6D8 (_lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_--operator().c)
 *     ?OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerMenuItemsRequestedEventArgs@3456@@Z @ 0x180233F40 (-OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@W.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18023F728 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18023FD1C (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 *     _lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator() @ 0x180256044 (_lambda_2de9129cf7ca5d1ddf0542513b424d5e_--operator().c)
 *     _lambda_65df8407daa36b2840171ab9f615be5e_::operator() @ 0x180256578 (_lambda_65df8407daa36b2840171ab9f615be5e_--operator().c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x180257F0C (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x18025858C (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 *     _lambda_858eee636f27872cdf74bbc97c00a8bc_::operator() @ 0x180292FB0 (_lambda_858eee636f27872cdf74bbc97c00a8bc_--operator().c)
 *     _lambda_795e02c192f463c18ca265aec6362396_::operator() @ 0x1802A3964 (_lambda_795e02c192f463c18ca265aec6362396_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___::Run @ 0x1802A4850 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___--Run.c)
 * Callees:
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180143530 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 */

CRPCTimeout *__fastcall CRPCTimeout::CRPCTimeout(CRPCTimeout *this, DWORD DueTime)
{
  DWORD CurrentThreadId; // eax
  HRESULT v5; // eax
  DWORD v6; // eax

  CurrentThreadId = GetCurrentThreadId();
  *((_QWORD *)this + 2) = 0LL;
  *(_DWORD *)this = CurrentThreadId;
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 2) = -2147467259;
  CBaseRPCTimeout::Disarm(this);
  v5 = CoEnableCallCancellation(0LL);
  *((_DWORD *)this + 2) = v5;
  if ( v5 >= 0 )
  {
    v6 = 5000;
    if ( DueTime )
      v6 = DueTime;
    CreateTimerQueueTimer((PHANDLE)this + 2, 0LL, CBaseRPCTimeout::s_Callback, this, v6, 0x3E8u, 0);
  }
  return this;
}
